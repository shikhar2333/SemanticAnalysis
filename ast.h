#include <string>
#include <vector>

using namespace std;

class ASTProg;

class ASTStatExpr;
class ASTStatAssignExpr;

class ASTExpr;
class ASTExprBinary;
class ASTExprTernary;
class ASTExprID;
class ASTExprINT;

class ASTRoot;
class ASTFuncDec;
class ASTListFuncDec;
class ASTDeclStatement;
class ASTListArgs;
class ASTBlock;
class ASTIndividualDecl;
class ASTParams;
class ASTExprStat;
class ASTVarDecl;
class ASTReturn;
class ASTIf;
class ASTElse;
class ASTBlockOrStatement;
class ASTFor;
class ASTCond;
class ASTParanCond;
class ASTNotCond;
class ASTAndOrCond;
class ASTRelopExpr;
class ASTVarAssign;
class ASTAssignStatement;
class ASTVarAssignment;
class ASTAssignment;
class ASTWhile;
class ASTBreak;
class ASTContinue;
class ASTParenExpr;
class ASTAssign2DArrayExpr;
class ASTAssignArrayExpr;
class ASTArrayValExpr;
class ASTD2ArrayValExpr;
class ASTPostIncDecExpr;
class ASTPostIncDecArr;
class ASTPostIncDec2DArr;
class ASTPreIncDecExpr;
class ASTPreIncDecArr;
class ASTPreIncDec2DArr;
class ASTParamsList;
class ASTWriteStatement;
class ASTReadStatement;
class ASTInputArgs;
class ASTVarInput;
class ASTArrayInput;
class ASTArray2DInput;
class ASTGlobalDecl;
class ASTArrayDeclaration;
class ASTD2ArrayDeclaration;
class ASTArrayAssignment;
class ASTD2ArrayAssignment;
class ASTArrayRef;
class ASTBlank;
class ASTPlusMinusExpr;
class ASTVarnameExpr;
class ASTBoolExpr;
class ASTCharExpr;
class ASTFuncCallExpr;

class ASTvisitor
{
public:
    virtual void visit(ASTProg &node) = 0;
    virtual void visit(ASTRoot &node) = 0;
    virtual void visit(ASTStatExpr &node) = 0;
    virtual void visit(ASTStatAssignExpr &node) = 0;
    virtual void visit(ASTFuncDec & node) = 0;
    virtual void visit(ASTListFuncDec & node) = 0;
    virtual void visit(ASTDeclStatement & node) = 0;
    virtual void visit(ASTListArgs & node) = 0;
    virtual void visit(ASTBlock & node) = 0;
    virtual void visit(ASTIndividualDecl & node) = 0;
    virtual void visit(ASTParams & node) = 0;
    virtual void visit(ASTExprStat & node) = 0;
    virtual void visit(ASTVarDecl & node) = 0;
    virtual void visit(ASTReturn & node) = 0;
    virtual void visit(ASTIf & node) = 0;
    virtual void visit(ASTElse & node) = 0;
    virtual void visit(ASTBlockOrStatement & node) = 0;
    virtual void visit(ASTFor & node) = 0;
    virtual void visit(ASTCond & node) = 0;
    virtual void visit(ASTNotCond & node) = 0;
    virtual void visit(ASTParanCond & node) = 0;
    virtual void visit(ASTAndOrCond & node) = 0;
    virtual void visit(ASTRelopExpr & node) = 0;
    virtual void visit(ASTVarAssign & node) = 0;
    virtual void visit(ASTAssignStatement & node) = 0;
    virtual void visit(ASTVarAssignment & node) = 0;
    virtual void visit(ASTAssignment & node) = 0;
    virtual void visit(ASTWhile & node) = 0;
    virtual void visit(ASTBreak & node) = 0;
    virtual void visit(ASTContinue & node) = 0;
    virtual void visit(ASTParenExpr & node) = 0;
    virtual void visit(ASTAssign2DArrayExpr &node) = 0;
    virtual void visit(ASTAssignArrayExpr &node) = 0;
    virtual void visit(ASTArrayValExpr &node) = 0;
    virtual void visit(ASTD2ArrayValExpr &node) = 0;
    virtual void visit(ASTPostIncDecExpr &node) = 0;
    virtual void visit(ASTPostIncDecArr &node) = 0;
    virtual void visit(ASTPostIncDec2DArr &node) = 0;
    virtual void visit(ASTPreIncDecExpr &node) = 0;
    virtual void visit(ASTPreIncDecArr &node) = 0;
    virtual void visit(ASTPreIncDec2DArr &node) = 0;
    virtual void visit(ASTParamsList &node) = 0;
    virtual void visit(ASTWriteStatement &node) = 0;
    virtual void visit(ASTReadStatement &node) = 0;
    virtual void visit(ASTInputArgs &node) = 0;
    virtual void visit(ASTVarInput &node) = 0;
    virtual void visit(ASTArrayInput &node) = 0;
    virtual void visit(ASTArray2DInput &node) = 0;
    virtual void visit(ASTGlobalDecl &node) = 0;
    virtual void visit(ASTArrayDeclaration &node) = 0;
    virtual void visit(ASTD2ArrayDeclaration &node) = 0;
    virtual void visit(ASTArrayAssignment &node) = 0;
    virtual void visit(ASTD2ArrayAssignment &node) = 0;
    virtual void visit(ASTArrayRef &node) = 0;
    virtual void visit(ASTBlank &node) = 0;
    virtual void visit(ASTPlusMinusExpr &node) = 0;
    virtual void visit(ASTVarnameExpr &node) = 0;
    virtual void visit(ASTBoolExpr &node) = 0;
    virtual void visit(ASTCharExpr &node) = 0;
    virtual void visit(ASTFuncCallExpr &node) = 0;

    virtual void visit(ASTExprBinary &node) = 0;
    virtual void visit(ASTExprTernary &node) = 0;
    virtual void visit(ASTExprID &node) = 0;
    virtual void visit(ASTExprINT &node) = 0;
    virtual void visit(ASTExpr &node) = 0;
};

class ASTnode
{
public:
    virtual ~ASTnode()
    {
    }

    //  virtual void printPostFix() const = 0;

    virtual void accept(ASTvisitor &V) = 0;
};

class ASTStat : public ASTnode
{
public:
    virtual ~ASTStat()
    {
    }

    //  virtual void printPostFix() const = 0;
    virtual void accept(ASTvisitor &V) = 0;
};
class ASTParams : public ASTnode
{
    public:
        std::string datatype;
        std::string varname;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTListArgs : public ASTnode
{
    public:
        std::vector<ASTParams* > params_list;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTBlock : public ASTnode
{
    public:
        std::vector<ASTStat* > statementList;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTIndividualDecl : public ASTnode
{
    public:
        std::string varname;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTVarDecl : public ASTIndividualDecl
{
    public:
        ASTExpr* expr;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
        std::string GetVarName()
        {
            return varname;
        }
};

class ASTArrayRef : public ASTnode
{
    public:
        std::string assign;
        std::vector<ASTExpr *> expr;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTArrayDeclaration : public ASTIndividualDecl
{
    public:
        int int_const;
        ASTArrayRef *array_ref;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
        std::string GetVarName()
        {
            return varname;
        }
};

class ASTD2ArrayDeclaration : public ASTIndividualDecl
{
    public:
        int int_const1, int_const2;
        ASTArrayRef *array_ref;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
        std::string GetVarName()
        {
            return varname;
        }
};

class ASTArrayAssignment : public ASTIndividualDecl
{
    public:
        ASTArrayRef *array_ref;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
        std::string GetVarName()
        {
            return varname;
        }
};

class ASTD2ArrayAssignment : public ASTIndividualDecl
{
    public:
        ASTArrayRef *array_ref;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
        std::string GetVarName()
        {
            return varname;
        }
};

class ASTDeclStatement : public ASTStat
{
    public:
        std::string datatype;
        std::vector<ASTIndividualDecl* > DeclStatementList;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTExprStat : public ASTStat
{
    public:
        ASTExpr* node;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTReturn : public ASTStat
{
    public:
        ASTExpr* expr;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTBlockOrStatement : public ASTnode
{
    public:
        ASTBlock* block;
        ASTStat* statement;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTIf : public ASTStat
{
    public:
        ASTCond* cond;
        ASTBlockOrStatement* blockOrStatement;
        ASTElse* ElsePart;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTElse : public ASTnode
{
    public:
        ASTBlockOrStatement* blockOrStatement;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTFor : public ASTStat
{
    public:
        ASTVarAssign *var1;
        ASTCond* cond;
        ASTVarAssign* var2;
        ASTBlockOrStatement* blockOrStatement;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTParamsList : public ASTnode
{
    public:
        std::vector<ASTExpr*> ExprList;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTWriteStatement : public ASTStat
{
    public:
        std::vector<string> string_expr;
        std::vector<ASTExpr *> ExprList;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTInputArgs : public ASTnode
{
    public:
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTVarInput : public ASTInputArgs
{
    public:
        ASTExprID* varname;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTArrayInput : public ASTInputArgs
{
    public:
        ASTExprID* varname;
        ASTExpr *expr;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTArray2DInput : public ASTInputArgs
{
    public:
        ASTExprID* varname;
        ASTExpr *expr1, *expr2;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTReadStatement : public ASTStat
{
    public:
        ASTInputArgs *InputArgs;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTCond : public ASTnode
{
    public:
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTParanCond : public ASTCond
{
    public:
        ASTCond* cond;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTNotCond : public ASTCond
{
    public:
        ASTCond* cond;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTAndOrCond : public ASTCond
{
    public:
        ASTCond* cond1;
        ASTCond* cond2;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTRelopExpr : public ASTCond
{
    public:
        ASTExpr* expr1;
        ASTExpr* expr2;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTVarAssign : public ASTnode
{
     public:
        ASTExprID* varname;
        ASTExpr* expr;  
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTRoot : public ASTnode
{
    public:
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTListFuncDec : public ASTnode
{
    public:
        std::string datatype;
        std::string funcname;
        ASTListArgs* params_list;
        ASTBlock* block;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTFuncDec : public ASTRoot
{
    public:
        std::vector<ASTListFuncDec *> FuncDecList;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTProg : public ASTnode
{
    public:
        ASTRoot *root;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTBlank : public ASTRoot
{
    public:
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }

};
class ASTGlobalDecl : public ASTRoot
{
    public:
        std::string datatype;
        std::vector<ASTIndividualDecl* > DeclStatementList;
        ASTRoot* root;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTExpr : public ASTnode
{
public:
    std::string type;
    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ASTStatExpr : public ASTStat
{
public:
    ASTExpr *expr;
    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ASTStatAssignExpr : public ASTStat
{
public:
    string id;
    ASTExpr *expr;
    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};
class ASTAssignment : public ASTnode
{
     public:
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTAssignStatement : public ASTStat
{
    public:
        ASTAssignment* assignment;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTVarAssignment : public ASTAssignment
{
    public:
        ASTExprID* varname;
        ASTExpr* expr;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
     
        }
};
class ASTAssignArrayExpr : public ASTAssignment
{
    public:
        ASTExprID* varname;
        ASTExpr *expr1, *expr2;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
     
        }
};
class ASTAssign2DArrayExpr : public ASTAssignment
{
    public:
        ASTExprID* varname;
        ASTExpr *expr1, *expr2, *expr3;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
     
        }
};
class ASTWhile : public ASTStat
{
    public:
        ASTCond* cond;
        ASTBlockOrStatement* blockOrStatement;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
    
};
class ASTBreak : public ASTStat
{
    public:
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTContinue : public ASTStat
{
    public:
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTParenExpr : public ASTExpr
{
    public:
        ASTExpr* expr;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTPlusMinusExpr : public ASTExpr
{
    public:
        ASTExpr* expr;
        std::string op;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTArrayValExpr : public ASTExpr
{
    public:
        ASTExprID* varname;
        ASTExpr* expr;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTD2ArrayValExpr : public ASTExpr
{
    public:
        ASTExprID* varname;
        ASTExpr *expr1, *expr2;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTPostIncDecExpr : public ASTExpr
{
    public:
        ASTExprID* varname;
        std::string op;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTPostIncDec2DArr : public ASTExpr
{
    public:
        ASTExprID* varname;
        ASTExpr *expr1, *expr2;
        std::string op;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTPostIncDecArr : public ASTExpr
{
    public:
        ASTExprID* varname;
        ASTExpr *expr;
        std::string op;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTPreIncDecExpr : public ASTExpr
{
    public:
        ASTExprID* varname;
        std::string op;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTPreIncDecArr : public ASTExpr
{
    public:
        ASTExprID* varname;
        ASTExpr *expr;
        std::string op;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTPreIncDec2DArr : public ASTExpr
{
    public:
        ASTExprID* varname;
        ASTExpr *expr1, *expr2;
        std::string op;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }

};
class ASTExprBinary : public ASTExpr
{
    std::string bin_operator;

    // lhs and rhs can be of any type.
    // So we need to use BaseAST
    ASTExpr *left;
    ASTExpr *right;

public:
    // Constructor to initialize binary operator,
    // lhs and rhs of the binary expression.
    ASTExprBinary(std::string op, ASTExpr *_left, ASTExpr *_right) : bin_operator(op), left(_left), right(_right) {}

    /*  virtual void printPostFix() const 
     {
     	lhs->printPostFix();
     	rhs->printPostFix();
     	std::cout << bin_operator << " "; 
     } */

    ASTExpr *getLeft()
    {
        return left;
    }

    ASTExpr *getRight()
    {
        return right;
    }

    std::string getBin_operator()
    {
        return bin_operator;
    }
    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ASTExprTernary : public ASTExpr
{

    ASTExpr *first;
    ASTExpr *second;
    ASTExpr *third;

public:
    ASTExprTernary(ASTExpr *first, ASTExpr *second, ASTExpr *third) : first(first), second(second), third(third) {}

    /*   virtual void printPostFix() const
     {
     	first->printPostFix();
     	second->printPostFix();
     	third->printPostFix();
     	std::cout << "? " << std::endl; 
     }  */

    ASTExpr *getFirst()
    {
        return first;
    }

    ASTExpr *getSecond()
    {
        return second;
    }

    ASTExpr *getThird()
    {
        return third;
    }

    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }
};

class ASTExprINT : public ASTExpr
{

    int intlit;

public:
    ASTExprINT(int intlit) : intlit(intlit) {}

    int getIntLit()
    {
        return intlit;
    }

    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }

    /* virtual void printPostFix() const
	{
		std::cout << intlit << " " ;
	} */
};

class ASTExprID : public ASTExpr
{
public:
    string id;
    ASTExprID(string id) : id(id) {}

    string getID()
    {
        return id;
    }

    virtual void accept(ASTvisitor &v)
    {
        v.visit(*this);
    }

    /* virtual void printPostFix() const
	{
		std::cout << intlit << " " ;
	} */
};

class ASTContext
{
public:
    ASTnode *root;

    ~ASTContext()
    {
        clearAST();
    }

    /// free all saved expression trees
    void clearAST()
    {
        delete root;
    }
};

class ASTVarnameExpr : public ASTExpr
{
    public:
        ASTExprID* varname;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTBoolExpr : public ASTExpr
{
    public:
        std::string value;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTCharExpr : public ASTExpr
{
    public:
        std::string literal;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};
class ASTFuncCallExpr : public ASTExpr
{
    public:
        ASTExprID* varname;
        ASTParamsList *params_list;
        virtual void accept(ASTvisitor &v)
        {
            v.visit(*this);
        }
};