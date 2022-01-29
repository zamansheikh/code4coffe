//binary serach tree from array
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//2*i + 1 is left child of i
//2*i + 2 is right child of i
//parent of i is (i-1)/2 || floorvalue of (i-1)/2

//binary node deletion has three cases
//1. node has no child
//2. node has one child
//3. node has two child

//inorder predecessor is the left most node in right subtree
//inorder successor is the right most node in left subtree

int main()
{
    int array[] = {10,12,1,4,5,6,7};
    int n = sizeof(array)/sizeof(array[0]);

    

}