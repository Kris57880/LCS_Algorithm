// LCS_Algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Longest Common Subsequence Problem
#include <iostream>
#include <string>
using namespace std;
typedef struct Sequence {
	string str1,str2;
	int size1, size2;
}seq;
void LCS(seq seq1);
int main()
{
	seq seq1;
	cin >> seq1.str1>>seq1.str2;
	seq1.size1 = seq1.str1.size();
	seq1.size2 = seq1.str2.size();
    return 0;
}
void LCS(seq seq1) {


}

