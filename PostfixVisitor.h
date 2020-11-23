//#include "ast.h"
#include <iostream>
#include <vector>
using namespace std;
struct Variable
{
    std::string datatype;
    std::string varname;
};
typedef struct Variable Variable;
std::vector< std::vector<Variable> > SymbolTable;
std::vector<Variable> Func_Args;
class PostFixVisitor : public ASTvisitor
{
public:
    void visit(ASTProg &node)
    {
        cout << "PostFixVisit traversal invoked" << endl;
        node.root->accept(*this);
    }
    void visit(ASTRoot &node)override{}
    void visit(ASTFuncDec &node)
    {
        cout<<"In ASTFuncDec"<<'\n';
        int i = 1;
        for (auto func : node.FuncDecList)
        {
            cout << "Function #" <<i<<'\n';
            // SymbolTable.push_back(vector<Variable>());
            func->accept(*this);
            i = i + 1;
        }
        while(!Func_Args.empty())
        {
            Func_Args.pop_back();
        }
    }
    void visit(ASTGlobalDecl &node)
    {
        cout<<"In ASTGlobalDecl"<<'\n';
        cout<<"Global Datatype: "<<node.datatype<<'\n';
        int i=1;
        SymbolTable.push_back(vector<Variable>());
        Variable x;
        x.datatype.assign(node.datatype);
        x.varname.assign(node.datatype);
        int last = SymbolTable.size() - 1;
        for(auto decl: node.DeclStatementList)
        {
            cout<<"GlobalDeclaration #"<<i<<'\n';
            SymbolTable[last].push_back(x);
            decl->accept(*this);
            i++;
        }
        if(node.root)
            node.root->accept(*this);
        SymbolTable.pop_back();
    }
    void visit(ASTBlank &node)
    {
        cout<<"In ASTBlank"<<'\n';
    }
    void visit(ASTListFuncDec &node)
    {
        cout<<"In ASTListFuncDec"<<'\n';
        cout<<"Function Name: "<<node.funcname<<'\n';
        node.params_list->accept(*this);
        node.block->accept(*this);
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
        SymbolTable.push_back(vector<Variable>());
        int last = SymbolTable.size() - 1;
        for(auto func_args: Func_Args)
            SymbolTable[last].push_back(func_args);
        for (auto stat : node.statementList)
        {
            cout << "Statement #" <<i<<'\n';
            stat->accept(*this);
            //cout<<"Exit Statement#"<<i<<'\n';
            i = i + 1;
        }
        SymbolTable.pop_back();
    }
    void visit(ASTDeclStatement &node)
    {
        cout<<"In ASTDeclStatement"<<'\n';
        int i = 1;
        int last = SymbolTable.size() - 1;
        Variable x;
        x.datatype.assign(node.datatype);
        x.varname.assign(node.datatype);
        for(auto decl : node.DeclStatementList)
        {
            cout<<"Declaration #"<<i<<'\n';
            SymbolTable[last].push_back(x);
            decl->accept(*this);
            i = i + 1;
        }
    }
    void visit(ASTIndividualDecl &node) override{}
    void visit(ASTVarDecl &node)
    {
        cout<<"In ASTVarDecl"<<'\n';
        int last = SymbolTable.size() - 1;
        int scope_last = SymbolTable[last].size() - 1;
        SymbolTable[last][scope_last].varname.assign(node.varname);
        // for(int i=0; i<SymbolTable.size(); i++)
        // {
        //     //cout<<i<<'\n';
        //     for(int j=0; j<SymbolTable[i].size(); j++)
        //     {
        //         cout<<SymbolTable[i][j].varname<<" "<<SymbolTable[i][j].datatype<<" ";
        //     }
        //     cout<<'\n';
        // }
        if(node.expr)
            node.expr->accept(*this);
    }
    void visit(ASTArrayDeclaration &node)
    {
        cout<<"In ASTArrayDeclaration"<<'\n';
        if(node.array_ref)
            node.array_ref->accept(*this);
        
        int last = SymbolTable.size() - 1;
        int scope_last = SymbolTable[last].size() - 1;
        SymbolTable[last][scope_last].varname.assign(node.varname);
    }
    void visit(ASTD2ArrayDeclaration &node)
    {
        cout<<"In ASTD2ArrayDeclaration"<<'\n';
        if(node.array_ref)
            node.array_ref->accept(*this);
        
        int last = SymbolTable.size() - 1;
        int scope_last = SymbolTable[last].size() - 1;
        SymbolTable[last][scope_last].varname.assign(node.varname);
    }
    void visit(ASTArrayAssignment &node)
    {
        cout<<"In ASTArrayAssignment"<<'\n';
        node.array_ref->accept(*this);
        int last = SymbolTable.size() - 1;
        int scope_last = SymbolTable[last].size() - 1;
        SymbolTable[last][scope_last].varname.assign(node.varname);
    }
    void visit(ASTD2ArrayAssignment &node)
    {
        cout<<"In ASTD2ArrayAssignment"<<'\n';
        node.array_ref->accept(*this);
        int last = SymbolTable.size() - 1;
        int scope_last = SymbolTable[last].size() - 1;
        SymbolTable[last][scope_last].varname.assign(node.varname);
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

    void visit(ASTFuncCallStatement &node)
    {
        cout<<"In ASTFuncCallStatement"<<'\n';
        cout<<"Function Called: "<<node.funcname<<'\n';
        node.params_list->accept(*this);
    }
    void visit(ASTReturn &node)
    {
        cout<<"In ASTReturn"<<'\n';
        if(node.expr)
            node.expr->accept(*this);
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
        cout<<"In ASTPostIncDecExpr"<<'\n';
    }
    void visit(ASTPostIncDec2DArr &node)
    {
        cout<<"In ASTPostIncDec2DArr"<<'\n';
        node.varname->accept(*this);
        node.expr1->accept(*this);
        node.expr2->accept(*this);
    }
    void visit(ASTPreIncDec2DArr &node)
    {
        cout<<"In ASTPreIncDec2DArr"<<'\n';
        node.varname->accept(*this);
        node.expr1->accept(*this);
        node.expr2->accept(*this);
    }
    void visit(ASTPostIncDecArr &node)
    {
        cout<<"In ASTPostIncDecArr"<<'\n';
        node.varname->accept(*this);
        node.expr->accept(*this);
    }
    void visit(ASTPreIncDecArr &node)
    {
        cout<<"In ASTPreIncDecArr"<<'\n';
        node.varname->accept(*this);
        node.expr->accept(*this);
    }
    void visit(ASTPreIncDecExpr &node)
    {
        cout<<"In ASTPreIncDecExpr"<<'\n';
        node.varname->accept(*this);
    }
    void visit(ASTParenExpr &node)
    {
        cout<<"In ASTParenExpr"<<'\n';
        node.expr->accept(*this);
    }
    void visit(ASTArrayValExpr &node)
    {
        cout<<"In ASTArrayValExpr"<<'\n';
        node.varname->accept(*this);
        node.expr->accept(*this);
    }
    void visit(ASTD2ArrayValExpr &node)
    {
        cout<<"In ASTD2ArrayValExpr"<<'\n';
        node.varname->accept(*this);
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
        //cout<<node.getID()<<" ";
        std::string id = node.getID();
        for(vector<vector<Variable>>::reverse_iterator rev_itr = SymbolTable.rbegin(); rev_itr!=SymbolTable.rend(); rev_itr++)
        {
            for(auto &var: *rev_itr)
            {
                cout<<var.varname<<" ";
                if(var.varname == id)
                {
                    return;
                }
            }
            cout<<'\n';
        }
        cout<<"Variable is being used before declaration"<<'\n';
        exit(0);
    }
    void visit(ASTExprINT &node)
    {
        cout << "Integer: " << node.getIntLit()<<'\n';
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