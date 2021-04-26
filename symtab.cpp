//
// Created by Roie Malykin on 19/04/2021.
//

/*#include <map>
#include "token.h"

class SymbolTable {
	map<string, shared_ptr<Token>> symMap;
	void initReserved();
public:
	SymbolTable () { initReserved(); }
	shared_ptr<Token> lookupToken(string text);
	void insertToken(string text, shared_ptr<Token> tokenp);
	void xref();
};
*/
#include "symtab.h"
// Taking as identifier (varToken) wich is not a put token
void SymbolTable::xref()
{

}
// Need to contain everything in the symbilk trable
void SymbolTable::initReserved()
{
    symMap.insert(pair <string,shared_ptr<Token>> ("auto", new Token(AUTO,"auto")));
    symMap.insert(pair <string,shared_ptr<Token>> ("break", new Token(BREAK,"break")));
    symMap.insert(pair <string,shared_ptr<Token>> ("break", new Token(CASE,"case")));
    symMap.insert(pair <string,shared_ptr<Token>> ("char", new Token(CHAR,"char")));
    symMap.insert(pair <string,shared_ptr<Token>>  ("const", new Token(CONST,"const")));
    symMap.insert(pair <string,shared_ptr<Token>> ("continue", new Token(CONTINUE,"continue")));
    symMap.insert(pair <string,shared_ptr<Token>> ("default", new Token(DEFAULT,"default")));
    symMap.insert(pair <string,shared_ptr<Token>> ("do", new Token( DO,"do")));
    symMap.insert(pair <string,shared_ptr<Token>> ("double", new Token(DOUBLE,"double")));
   // else	307
    symMap.insert(pair <string,shared_ptr<Token>> ("else", new Token(ELSE,"else")));
    //enum	302
    symMap.insert(pair <string,shared_ptr<Token>> ("enum", new Token(ENUM,"enum")));
    //extern	285
    symMap.insert(pair <string,shared_ptr<Token>> ("extern", new Token(EXTERN,"extern")));
    //float	295
    symMap.insert(pair <string,shared_ptr<Token>> ("float", new Token(FLOAT,"float")));
    //for	311
    symMap.insert(pair <string,shared_ptr<Token>> ("for", new Token(CHAR,"for")));
    //goto	312
    symMap.insert(pair <string,shared_ptr<Token>> ("goto", new Token(GOTO,"goto")));
    //if	306
    symMap.insert(pair <string,shared_ptr<Token>> ("if", new Token(IF,"if")));
    //int	291
    symMap.insert(pair <string,shared_ptr<Token>> ("int", new Token(INT,"int")));
    //long	292
    symMap.insert(pair <string,shared_ptr<Token>> ("long", new Token(LONG,"long")));
    //register	288
    symMap.insert(pair <string,shared_ptr<Token>> ("register", new Token(REGISTER,"register")));
    //return	315
    symMap.insert(pair <string,shared_ptr<Token>> ("return", new Token(RETURN,"return")));
    //short	290
    symMap.insert(pair <string,shared_ptr<Token>> ("short", new Token(SHORT,"short")));
   // signed	293
    symMap.insert(pair <string,shared_ptr<Token>> ("signed", new Token(SIGNED,"signed")));
    //sizeof	261
    symMap.insert(pair <string,shared_ptr<Token>> ("sizeof", new Token(SIZEOF,"sizeof")));
   // static	286
    symMap.insert(pair <string,shared_ptr<Token>> ("static", new Token(STATIC,"static")));
    //struct	300
    symMap.insert(pair <string,shared_ptr<Token>> ("struct", new Token(STRUCT,"struct")));
    //switch	308
    symMap.insert(pair <string,shared_ptr<Token>> ("switch", new Token(SWITCH,"switch")));
    //typedef	284
    symMap.insert(pair <string,shared_ptr<Token>> ("typedef", new Token(TYPEDEF,"typedef")));
    //union	301
    symMap.insert(pair <string,shared_ptr<Token>> ("union", new Token(UNION,"union")));
    //unsigned	294
    symMap.insert(pair <string,shared_ptr<Token>> ("unsigned", new Token(UNSIGNED,"unsigned")));
    //void	299
    symMap.insert(pair <string,shared_ptr<Token>> ("void", new Token(VOID,"void")));
    //volatile	298
    symMap.insert(pair <string,shared_ptr<Token>> ("volatile", new Token(VOLATILE,"volatile")));
    //while	309
    symMap.insert(pair <string,shared_ptr<Token>> ("while", new Token(WHILE,"while")));


}

void SymbolTable::insertToken(string text, shared_ptr<Token> tokenp)
{
    symMap.insert(pair < string,shared_ptr<Token>> (text, tokenp) );
}

shared_ptr<Token> SymbolTable::lookupToken(string text)
{
 // Checking if "text" token exists. ( Count > 0)
    shared_ptr<Token> t_ptr;
    if(symMap.count(text) == 0) // If no Token found
    {
        shared_ptr<Token> t_ptr = shared_ptr<Token>(Token(TYPEDEF,text));
        SymbolTable::insertToken( text, t_ptr);
        return t_ptr;
    }
    else // This token exists
    {
        _Rb_tree_iterator<pair<const basic_string<char>, shared_ptr<Token>>> a = symMap.find(text);
        t_ptr = a;

    }
}


