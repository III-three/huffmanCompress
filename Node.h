#ifndef _NODE_H_
#define _NODE_H_

typedef struct _NODE_
{
	unsigned char ch;   //�ַ� 
	int count;          //Ȩ 
}Node;

typedef struct _HUFFMANNODE_
{
	unsigned char ch;   //�ַ� 
	int count;          //Ȩ 
	char code[256];     //���������� 
    int parent , leftchild , rightchild;
}HuffmanNode;

#endif
