// LCS_Algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Longest Common Subsequence Problem
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
	int i,j;
	int size1=seq.size1;
	int size2=seq.size2;
	string str1=seq.str1 , str2=seq.str2;
	int **sub=new int*[size1];
	int **length=new int*[size1];
	for(i=0;i!=size1;i++){
		*sub[i]=new int[size2];
		*length=new int[size2];
		for(j=0;j!=size2;j++)
			sub[i][j]=0;
			length[i][j]=0;
	}  
	for(i=0;i!=size1;i++){
		for(j=0;j!=size2;j++)
			if(str[i]==str[j]){
				sub[i][j]=0//右上
				if(i-1<0||j-1<0)	length[i][j]=0;
				else length[i][j]=length[i-1][j-1]+1;
			}else{
				
			} 
	}
}
