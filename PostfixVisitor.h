//#include "ast.h"
#include <iostream>
using namespace std;
struct Variable
{
    std::string datatype;
    std::string varname;
};
typedef struct Variable Variable;

class Scope
{
    public:
        map<std::string, std::string> scp;
        void AddScope(std::string name, std::string datatype)
        {
            scp[name] = datatype;
        }
        bool FindScope(std::string name)
        {
            if(scp.find(name) == scp.end())
                return false;
            return true;
        }
        string getType(std::string name)
        {
            return scp[name];
        }
};
std::vector<Scope> SymbolTable;
string GetVarType(std::string name)
{
    int last = SymbolTable.size() - 1;
    string type = "";
    for(int i = last; i>=0; i--)
    {
        if( SymbolTable[i].FindScope(name))
        {
            type = SymbolTable[i].getType(name);
        }  
    }
    return type;
}
std::vector<Variable> Func_Args;
map<std::string, std::string> FuncNames;
map< std::string, std::vector<string> > FuncList;
bool check_func(std::string funcname)
{
    if(FuncNames.find(funcname) != FuncNames.end())
        return true;
    return false;
}

class PostFixVisitor : public ASTvisitor
{
public:
    void visit(ASTProg &node)
    {
        cout << "PostFixVisit traversal invoked" << endl;
        Scope scope;
        SymbolTable.push_back(scope);
        node.root->accept(*this);
        SymbolTable.pop_back();
    }
    void visit(ASTRoot &node)override{}
    void visit(ASTFuncDec &node)
    {
        cout<<"In ASTFuncDec"<<'\n';
        int i = 1;
        for (auto func : node.FuncDecList)
        {
            cout << "Function #" <<i<<'\n';
            func->accept(*this);            
            while(!Func_Args.empty())
            {
                Func_Args.pop_back();
            }
            i = i + 1;
        }
        //cout<<"Exit ASTFuncDec"<<'\n';
    }
    void visit(ASTGlobalDecl &node)
    {
        cout<<"In ASTGlobalDecl"<<'\n';
        cout<<"Global Datatype: "<<node.datatype<<'\n';
        int i = 1;

        int last = SymbolTable.size() - 1;

        for(auto decl: node.DeclStatementList)
        {
            cout<<"GlobalDeclaration #"<<i<<'\n';
            SymbolTable[last].AddScope( (*decl).varname, node.datatype);
            decl->accept(*this);
            //cout<<SymbolTable[last].FindScope((*decl).varname)<<'\n';
            i++;
        }
        if(node.root)
            node.root->accept(*this);
    }
    void visit(ASTBlank &node)
    {
        cout<<"In ASTBlank"<<'\n';
    }
    void visit(ASTListFuncDec &node)
    {
        cout<<"In ASTListFuncDec"<<'\n';
        bool found = check_func(node.funcname);
        if(found)
        {
            cout<<"Function Redeclaration Error"<<'\n';
            exit(0);
        }
        cout<<"Function Name: "<<node.funcname<<'\n';
        FuncNames[node.funcname] = node.datatype;
        node.params_list->accept(*this);
        int size = Func_Args.size();
        string t[size];
        for(int i=0; i<size; i++)
            t[i] = Func_Args[i].datatype;
        FuncList[node.funcname] = std::vector<string>(t, t + size);
        node.block->accept(*this);
        //cout<<"Exit ASTListFuncDec"<<'\n';
    }
    void visit(ASTParamsList &node)
    {
        cout<<"In ASTParamsList"<<'\n';
        int i = 1;
        for(auto params: node.ExprList)
        {
            cout<<"Function Parameter #"<<'\n';
            params->accept(*this);
            i++;
        }
    }
    void visit(ASTBlock &node)
    {
        cout<<"In ASTBlock"<<'\n';
        int i = 1;
        Scope scope;
        SymbolTable.push_back(scope);
        int last = SymbolTable.size() - 1;
        for(auto func_args: Func_Args)
            SymbolTable[last].AddScope(func_args.varname, func_args.datatype);
        for (auto stat : node.statementList)
        {
            cout << "Statement #" <<i<<'\n';
            stat->accept(*this);
            //cout<<"Exit Statement#"<<i<<'\n';
            i = i + 1;
        }
        SymbolTable.pop_back();
        //cout<<"Exit ASTBlock"<<'\n';
    }
    void visit(ASTDeclStatement &node)
    {
        cout<<"In ASTDeclStatement"<<'\n';
        int i = 1;
        int last = SymbolTable.size() - 1;
        for(auto decl : node.DeclStatementList)
        {
            cout<<"Declaration #"<<i<<'\n';
            SymbolTable[last].AddScope((*decl).varname, node.datatype);
            decl->accept(*this);
            i = i + 1;
        }
    }
    void visit(ASTIndividualDecl &node) override{}
    void visit(ASTVarDecl &node)
    {
        cout<<"In ASTVarDecl"<<'\n';
        if(node.expr)
        {
            node.expr->accept(*this);
            string type = GetVarType(node.varname);
            cout<<node.expr->type<<'\n';
            if( type != node.expr->type )
            {
                cout<<"Type mismatch on Left Hand Side and Right Hand Side"<<'\n';
                exit(0);
            }
        }
    }
    void visit(ASTArrayDeclaration &node)
    {
        cout<<"In ASTArrayDeclaration"<<'\n';
        if(node.array_ref)
        {
            node.array_ref->accept(*this);
            ASTArrayRef* ExprList = node.array_ref;
            string type = GetVarType(node.varname);
            for(auto expr: ExprList->expr)
            {
                if( type != expr->type)
                {
                    cout<<"Type mismatch on Left Hand Side and Right Hand Side"<<'\n';
                    exit(0);
                }
            }
        }
    }
    void visit(ASTD2ArrayDeclaration &node)
    {
        cout<<"In ASTD2ArrayDeclaration"<<'\n';
        if(node.array_ref)
        {
            node.array_ref->accept(*this);
            ASTArrayRef* ExprList = node.array_ref;
            string type = GetVarType(node.varname);
            cout<<type<<'\n';
            for(auto expr: ExprList->expr)
            {
                if( type != expr->type)
                {
                    cout<<"Type mismatch on Left Hand Side and Right Hand Side"<<'\n';
                    exit(0);
                }
            }
        }
    }
    void visit(ASTArrayAssignment &node)
    {
        cout<<"In ASTArrayAssignment"<<'\n';
        node.array_ref->accept(*this);
        ASTArrayRef* ExprList = node.array_ref;
        string type = GetVarType(node.varname);
        cout<<type<<'\n';
        for(auto expr: ExprList->expr)
        {
            if( type != expr->type)
            {
                cout<<"Type mismatch on Left Hand Side and Right Hand Side"<<'\n';
                exit(0);
            }
        }
    }
    void visit(ASTD2ArrayAssignment &node)
    {
        cout<<"In ASTD2ArrayAssignment"<<'\n';
        node.array_ref->accept(*this);
        ASTArrayRef* ExprList = node.array_ref;
        string type = GetVarType(node.varname);
        cout<<type<<'\n';
        for(auto expr: ExprList->expr)
        {
            if( type != expr->type)
            {
                cout<<"Type mismatch on Left Hand Side and Right Hand Side"<<'\n';
                exit(0);
            }
        }
    }
    void visit(ASTArrayRef &node)
    {
        cout<<"In ASTArrayRef"<<'\n';
        int i = 1;
        for(auto expression: node.expr)
        {
            cout<<"Array Declaration Value# "<<i<<'\n';
            expression->accept(*this);
            i = i + 1;
        }
    }
    virtual void visit(ASTStatExpr &node)
    {
        node.expr->accept(*this);
    }

    void visit(ASTStatAssignExpr &node)
    {
        cout << node.id;
        node.expr->accept(*this);
        cout << " =";
    }
    void visit(ASTExprStat &node)
    {
        cout<<"In ASTExprStat"<<'\n';
        node.node->accept(*this);
        //cout<<"Exit ASTExprStat"<<'\n';
    }
    void visit(ASTAssignStatement &node)
    {
        cout<<"In ASTAssignStatement"<<'\n';
        node.assignment->accept(*this);
    }

    void visit(ASTVarAssignment &node)
    {
        cout<<"In ASTVarAssignment"<<'\n';
        node.varname->accept(*this);
        node.expr->accept(*this);
    }
    void visit(ASTAssign2DArrayExpr &node)
    {
        cout<<"In ASTAssign2DArrayExpr"<<'\n';
        node.varname->accept(*this);
        node.expr1->accept(*this);
        node.expr2->accept(*this);
        node.expr3->accept(*this);
    }
    void visit(ASTAssignArrayExpr &node)
    {
        cout<<"In ASTAssignArrayExpr"<<'\n';
        node.varname->accept(*this);
        node.expr1->accept(*this);
        node.expr2->accept(*this);
    }
    void visit(ASTReturn &node)
    {
        cout<<"In ASTReturn"<<'\n';
        if(node.expr)
            node.expr->accept(*this);
        //cout<<"Exit"<<'\n';
    }
    void visit(ASTWhile &node)
    {
        cout<<"In ASTWhile"<<'\n';
        node.cond->accept(*this);
        node.blockOrStatement->accept(*this);
    }
    void visit(ASTBlockOrStatement &node)
    {
        cout<<"In ASTBlockOrStatement"<<'\n';
        if(node.block)
            node.block->accept(*this);
        if(node.statement)
            node.statement->accept(*this);
    }
    

    void visit(ASTExpr &node) override{}
    void visit(ASTPostIncDecExpr &node)
    {
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
        cout<<"In ASTPostIncDecExpr"<<'\n';
    }
    void visit(ASTPostIncDec2DArr &node)
    {
        cout<<"In ASTPostIncDec2DArr"<<'\n';
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
        node.expr1->accept(*this);
        node.expr2->accept(*this);
    }
    void visit(ASTPreIncDec2DArr &node)
    {
        cout<<"In ASTPreIncDec2DArr"<<'\n';
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
        node.expr1->accept(*this);
        node.expr2->accept(*this);
    }
    void visit(ASTPostIncDecArr &node)
    {
        cout<<"In ASTPostIncDecArr"<<'\n';
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
        node.expr->accept(*this);
    }
    void visit(ASTPreIncDecArr &node)
    {
        cout<<"In ASTPreIncDecArr"<<'\n';
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
        node.expr->accept(*this);
    }
    void visit(ASTFuncCallExpr &node)
    {
        cout<<"In ASTFuncCallExpr"<<'\n';
        node.varname->accept(*this);
        node.type = FuncNames[node.varname->id];
        cout<<"Function Called: "<<node.varname->id<<'\n';
        if(!check_func(node.varname->id))
        {
            cout<<"Function Called without any Declaration"<<'\n';
            exit(0);
        }
        node.params_list->accept(*this);
        int i = 0;
        int size = FuncList[node.varname->id].size();
        int call_size = node.params_list->ExprList.size();
        if(size != call_size)
        {
            cout<<node.varname->id<<" "<<call_size<<'\n';
            cout<<"Unexpected Number Of Parameters in Function Call"<<'\n';
            exit(0);
        }
        for(auto params: node.params_list->ExprList)
        {
            if(params->type != FuncList[node.varname->id][i])
            {
                cout<<"Type of Function Parameter doesn't match with the function signature"<<'\n';
                exit(0);
            }
            i++;
        }
    }
    void visit(ASTPlusMinusExpr &node)
    {
        cout<<"In ASTPlusMinusExpr: "<<node.op<<'\n';
        node.expr->accept(*this);
        int last = SymbolTable.size() - 1;
        node.type = node.expr->type;
    }
    void visit(ASTPreIncDecExpr &node)
    {
        cout<<"In ASTPreIncDecExpr"<<'\n';
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
    }
    void visit(ASTParenExpr &node)
    {
        cout<<"In ASTParenExpr"<<'\n';
        node.expr->accept(*this);
        int last = SymbolTable.size() - 1;
        node.type = node.expr->type;
    }
    void visit(ASTVarnameExpr &node)
    {
        cout<<"In ASTVarnameExpr"<<'\n';
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
    }
    void visit(ASTExprINT &node)
    {
        cout << "Integer: " << node.getIntLit()<<'\n';
        node.type = "int";
    }
    void visit(ASTBoolExpr &node)
    {
        cout<<"In ASTBoolExpr: "<<node.value<<'\n';
        node.type = "bool";
    }
    void visit(ASTCharExpr &node)
    {
        cout<<"In ASTCharExpr"<<'\n';
        node.type = "char";
    }
    void visit(ASTArrayValExpr &node)
    {
        cout<<"In ASTArrayValExpr"<<'\n';
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
        node.expr->accept(*this);
    }
    void visit(ASTD2ArrayValExpr &node)
    {
        cout<<"In ASTD2ArrayValExpr"<<'\n';
        node.varname->accept(*this);
        node.type = GetVarType(node.varname->id);
        node.expr1->accept(*this);
        node.expr2->accept(*this);
    }
    void visit(ASTExprBinary &node)
    {
        cout<<"In ASTExprBinary"<<'\n';
        ASTExpr *left = node.getLeft();
        ASTExpr *right = node.getRight();

        left->accept(*this);
        right->accept(*this);
        if(left->type != right->type)
        {
            cout<<left->type<<" "<<right->type<<'\n';
            cout<<"Left Expr and Right Expr type don't match"<<'\n';
            exit(0);
        }
        node.type = left->type;
        cout << " " + node.getBin_operator()<<'\n';
    }

    void visit(ASTExprTernary &node)
    {
        ASTExpr *first = node.getFirst();
        ASTExpr *second = node.getSecond();
        ASTExpr *third = node.getThird();

        first->accept(*this);
        second->accept(*this);
        third->accept(*this);

        // visit(node.getFirst());
        // visit(node.getSecond());
        // visit(node.getThird());
        cout << " ?: ";
    }

    void visit(ASTExprID &node)
    {
        cout<<"Variable Name: "<<node.getID()<<" "<<'\n';
        std::string id = node.getID();
        for(int i = SymbolTable.size() - 1; i>=0; i-- )
        {
            if( SymbolTable[i].FindScope(id) )
            {
                return;
            }
        }
        //cout<<FuncNames[id]<<'\n';
        if(check_func(id))
            return;
        cout<<"Variable is being used before declaration"<<'\n';
        exit(0);
    }
    void visit(ASTListArgs &node)
    {
        cout<<"In ASTListArgs"<<'\n';
        int i = 1;
        for(auto arg: node.params_list)
        {
            cout<<"Function Arguement #"<<i<<'\n';
            arg->accept(*this);
            i++;
        }
    }
    void visit(ASTParams &node)
    {
        cout<<"Variable Datatype: "<<node.datatype<<" ";
        cout<<"Variable Name: "<<node.varname<<'\n';
        Variable x;
        x.datatype.assign(node.datatype);
        x.varname.assign(node.varname);
        Func_Args.push_back(x);
    }
    void visit(ASTIf &node)
    {
        cout<<"In ASTIf"<<'\n';
        node.cond->accept(*this);
        node.blockOrStatement->accept(*this);
        if(node.ElsePart)
            node.ElsePart->accept(*this);
    }
    void visit(ASTElse &node)
    {
        cout<<"In ASTElse"<<'\n';
        node.blockOrStatement->accept(*this);
    }
    
    void visit(ASTFor &node)
    {
        cout<<"In ASTFor"<<'\n';
        node.var1->accept(*this);
        node.cond->accept(*this);
        node.var2->accept(*this);
        node.blockOrStatement->accept(*this);
    }

    void visit(ASTCond &node) override{}
    void visit(ASTParanCond &node)
    {
        cout<<"In ASTParanCond"<<'\n';
        node.cond->accept(*this);
    }
    void visit(ASTNotCond &node)
    {
        cout<<"In ASTNotCond"<<'\n';
        node.cond->accept(*this);
    }
    void visit(ASTAndOrCond &node)
    {
        cout<<"In ASTAndOrCond"<<'\n';
        node.cond1->accept(*this);
        node.cond2->accept(*this);
    }
    void visit(ASTRelopExpr &node)
    {
        cout<<"In ASTRelOpExpr"<<'\n';
        node.expr1->accept(*this);
        node.expr2->accept(*this);
    }
    void visit(ASTVarAssign &node)
    {
        cout<<"In ASTVarAssign"<<'\n';
        //cout<<"For Loop Variable: "<<node.varname<<'\n';
        node.varname->accept(*this);
        node.expr->accept(*this);
    }

    void visit(ASTAssignment &node) override{}

    void visit(ASTBreak &node)
    {
        cout<<"In ASTBreak"<<'\n';
    }
    void visit(ASTContinue &node)
    {
        cout<<"In ASTContinue"<<'\n';
    }
    void visit(ASTWriteStatement &node)
    {
        cout<<"In ASTWriteStatement"<<'\n';
        int i = 1;
        for(auto s: node.string_expr)
        {
            cout<<"String Expression #"<<s<<'\n';
        }
        for(auto expr: node.ExprList)
        {
            cout<<"Expression #"<<i<<'\n';
            expr->accept(*this);
            i++;
        }
    }
    void visit(ASTReadStatement &node)
    {
        cout<<"In ASTReadStatement"<<'\n';
        node.InputArgs->accept(*this);
    }

    void visit(ASTInputArgs &node) override{}
    void visit(ASTVarInput &node)
    {
        cout<<"In ASTVarInput"<<'\n';
        //cout<<"Variable for Input: "<<node.varname<<'\n';
        node.varname->accept(*this);
    }
    void visit(ASTArrayInput &node)
    {
        cout<<"In ASTVarInput"<<'\n';
        //cout<<"Array Variable for Input: "<<node.varname<<'\n';
        node.varname->accept(*this);
        node.expr->accept(*this);
    }
    void visit(ASTArray2DInput &node)
    {
        cout<<"In ASTVarInput"<<'\n';
        //cout<<"2D Array Variable for Input: "<<node.varname<<'\n';
        node.varname->accept(*this);
        node.expr1->accept(*this);
        node.expr2->accept(*this);
    }

};