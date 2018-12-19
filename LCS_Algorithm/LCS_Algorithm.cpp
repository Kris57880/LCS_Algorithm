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
int main(){
	seq seq1;
	cin >> seq1.str1>>seq1.str2;
	seq1.size1 = seq1.str1.size();
	seq1.size2 = seq1.str2.size();
	LCS(seq1);
    return 0;
}
void LCS(seq seq1) {
	int i,j;
	int size1=seq1.size1;
	int size2=seq1.size2;
	string str1=seq1.str1 , str2=seq1.str2;
	int **sub=new int*[size1];
	int **length=new int*[size1];
	for(i=0;i!=size1;i++){
		sub[i]=new int[size2];
		length[i]=new int[size2];
		for(j=0;j!=size2;j++)
			sub[i][j]=0;
			length[i][j]=0;
	}  
	for(i=0;i!=size1;i++){
		for(j=0;j!=size2;j++)
			if(str1[i]==str2[j]){
				sub[i][j]=0;//右上
				if(i-1<0||j-1<0)
					length[i][j]=1;
				else 
					length[i][j]=length[i-1][j-1]+1;
			}else{
				if(i-1<0||j-1<0)	
					length[i][j]=1;
				if(length[i-1][j]>=length[i][j-1]){
					sub[i][j]=1;//上
					length[i][j]=length[i-1][j]; 
				}else{
					sub[i][j]=2;//左
					length[i][j]=length[i][j-1];
				}
			} 
	}
	//print LCS
	cout<<length[size1][size2];
}
