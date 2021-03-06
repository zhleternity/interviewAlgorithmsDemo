//
//  interviewAlg.hpp
//  InterviewAlgorithms
//
//  Created by lingLong on 16/7/26.
//  Copyright © 2016年 ling. All rights reserved.
//

#ifndef interviewAlg_hpp
#define interviewAlg_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>


#define INFINITY 100000
#define MAXN 200

using namespace std;

class AllAlgorithms{
private:
    
    int max(int a,int b);
    int min(int a,int b);
    
public:
    int largestRectArea(vector<int> &height);
    int gatherRain(vector<int> &A);
    void topologic(vector<vector<int>> &G ,vector<int> & inDegree,vector<int> &toposort);
    int getLongestParenthese(const char *p);
    int getLongestParenthese2(const char *p);
    int reversePolishNotation(const char **p,int size);
    bool isOperator(const char *token);
    void reverseString(string &str,int idxFrom,int idxTo);
    void leftRotateMoving(string &str,int n,int m);
    void longestCommonSequence(const char *str1,const char *str2,string &res);
    int longestIncreasingSequence(const int *p,int length,int *pre,int& nInx);
    void getLIS(const int *arr,const int *pre,int nIdx,vector<int> &list);
    void _print(int *p,int size);
    void _print1(bool *p, int size);
    void recursionPermutation(int *a,int size,int n);
    bool isDuplicate(const int *a,int n,int t);
    void strFullPermutation(int *a,int size,int n);
    void strFullPermutation1(char *a,int size,int n);
    void reverseTwo(int *from,int *to);
    bool getNextPermutation(int *a,int size);
    int bruteForceSearch(const char *str,const char *p);
    int KMPSearch(const char *text,const char *pattern,int *next,int n);
    void getNext(const char *p,int next[]);
    void getNext2(const char *p,int next[]);
    int longestPalindrome(const char *s,int n);
    void Manacher(char *s,int *p);
    void Manacher2(char *s,int *p);
    int getLocalMaximum(const int *array,int n);
    int findFirstMissNumber(int *a,int size);
    int findRollingMin(int *a,int size);
    int sumZeroSubArray(const int *a,int size);
    void sumZeroSubArray2(const int *a,int size,int min,int &fromIdx,int &toIdx);
    int sumMaxSubArray(const int *a,int size);
    int sumMaxSubArray2(const int *a,int size,int &fromIdx,int &toIdx);
    void hollandNationalFlag(int *a, int length);
    void hollandNationalFlag2(int *a, int length);
    int calcMaxGapOfArray(const int *a,int size);
    void cantorExpansion(const int *a,int *b,int size);
    void enumNUmber(int *a,bool *res,int size,int k,int sumCurr,int sum);
    void findNumber(int *a, bool *x, int i, int sum, int has, int residue);
    void findNumber(int *a, bool *x, int i, int sum, int has, int negative, int positive);
    void merge(int *a, int low, int middle, int high);
    void mergeSort(int *a, int low, int high);
    void mergeInversionNumber(int *a, int low, int middle, int high, int& count);
    void mergeInversionNumber2(int *a, int low, int middle, int high, int& count);
    void mergeSortInversionNumber(int *a, int low, int high, int& count);
    void ganttChart(const int *a, const int *b, int *c, int size);
    bool findTwoNumberEqualToSum(int *array, int size, int sum, int &a, int &b);
    void Eratosthenes(bool *a, int n);
    int primeFind(const int *a, int size, int x);
    int twoSum(int sum, const int *a, int size);
    void bubbleSort(int *a, int size);
    void heapAdjust(int *a, int n, int size);
    void heapSort(int *a, int k, int size);
    void _quickSort(int *a, int from ,int to);
    void quickSort(int *a, int size);
    int patition(int key, int *a, int from ,int to);
    int getLis2(const int *p, int length);
    int getLis3(const int *a, int size);
    void pre_insert(int *a, int &size, int x);
    void primeSolve(int arr[], int n);
    void primeSolve2(int arr[], int n);
    void primeSolve3(int arr[], int n);
    int solve1(int arr[], int n);
    int solve2(int arr[], int n);
    int solve3(int arr[], int n);
    int solve4(int arr[], int n);

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};



//桶排序
typedef struct tagSBucket{
    bool bValid;
    int nMin;
    int nMax;
    tagSBucket(): bValid(false) {}
    //add the number of 'n' into the bucket
    void nAdd(int n)
    {
        if(! bValid){
            nMin = n;
            nMax = n;
            bValid = true;
        }
        else{
            if(nMax < n)
                nMax = n;
            else if (nMin > n)
                nMin = n;
        }
    }
}sBucket;

class YoungMatrix{
private:
    int m_nRow;
    int m_nCol;
    int **m_pData;
    
public:
    YoungMatrix(int row, int col);
    ~ YoungMatrix();
    
    void Init(int row, int col);
    void destroyY();
    bool insertY(int x);
    bool insertY2(int x);
    void deleteY(int row, int col);
    bool findY(int x, int &row, int &col) const;
    void printY() const;
    bool isBig(int a, int b);
};



typedef struct tagItem{
    int t;
    int idx;
    bool first;
    bool operator < (struct tagItem& item) const{
        return t < item.t;
    }
    
}HLItem;



#endif /* interviewAlg_hpp */
