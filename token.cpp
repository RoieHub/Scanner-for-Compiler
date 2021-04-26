//
// Created by Roie Malykin on 19/04/2021.
//
/*
 * #include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <memory>
#include "tokentype.h"
using namespace std;

class Token {
    tokenType type;
    string text;
public:
    Token(tokenType tt, string t) : type(tt), text(t) {}
    tokenType getType();
    string getText();
    void printToken();
    virtual void add_line(int l) {}
    virtual shared_ptr<set<int>> getLines() {return nullptr;}
};



 *
 * */
#include "token.h"
// Token Class methods
tokenType Token::getType()
{
return this->type;

}
string Token::getText()
{
    return this->text;
}
void Token::printToken()
{
    std::cout << this->getType() << "  " << this->getText() << endl;
}
/*class varToken: public Token {
    shared_ptr<set<int>> lines = make_shared<set<int>>();
//    shared_ptr<set<int>> lines;
public:
    varToken(string t) : Token(IDENTIFIER, t) {}
    void add_line(int l);
    shared_ptr<set<int>> getLines();
};*/


// VarToken methods
void varToken::add_line(int l)
{
    this->lines->insert(l);

}
shared_ptr<set<int>> varToken::getLines()
{
    return this->lines;
}



