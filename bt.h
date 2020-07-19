/* Program  :bt.h
 Deskripsi       :  membuat header untuk bt.c
 Author      :  Kartika Milenda
 Versi/Tanggal  : 01/22/06/2020
 Compiler      : Dev-C++ 5.11
 ================================================ */
#ifndef BINTREE_H
#define BINTREE_H

#include <stdlib.h>
#include "boolean.h"
#include "Statistic.h"

#define Nil NULL
#define MAX   1000
#define Info(P) (P)->info
#define Left(P) (P)->left
#define Parent(P) (P)->parent
#define Right(P) (P)->right
#define Count(P) (P)->count

typedef statistic infotype;
typedef struct tElmtNode *address;
typedef struct tElmtNode
{
    infotype info;
    address left;
    address right;
    address parent;
    int count;
} ElmtNode;

typedef address BinTree;

/* ***** Manajemen Memory ******* */

/* menghasilkan address hasil alokasi sebuah Node */
/* Jika alokasi berhasil, maka address tidak Nil  */
/* Info(P)=X, Left(P)=Nil,Rigr(P)=Nil; Count(P)=0 */	
/* Jika alokasi gagal ; mengembalikan  Nil 	     */
address Alokasi(infotype X);

/*  Mengembalikan true jika pohon kosong  */
boolean IsEmpty(BinTree P);

/* Mengirimkan anak kiri dari pohon biner P yang tidak kosong */
BinTree GetLeft(BinTree P);

/* Mengirimkan anak kanan dari pohon biner P yang tidak kosong */
BinTree GetRight(BinTree P);

/* ***************** KONSTRUKTOR ****************  */

/* Menghasilkan sebuah pohon Biner dari A, L, dan R jika Alokasi berhasil */
/* Menghasilkan pohon kosong Nil, jika alokasi gagal 			  */
BinTree Tree(infotype X,BinTree L,BinTree R);

/* I.S   : Sembarang 	*/
/* F.S   : Menghasilkan sebuah pohon biner P dari A,L,dan R, jika alokasi */
/*         berhasil; Menghasilkan pohon P yang kosong jika alokasi gagal  */
void MakeTree(infotype X,BinTree L,BinTree R,BinTree *P);

/* ********* PREDIKAT PENTING  **************  */

/* Mengirimkan True jika pohon biner tidak kosong; P adalah pohon  */
/* unerleft : hanya mempunyai subpohon kiri 			      */
boolean IsUnerLeft(BinTree P);

/* Mengirimkan True jika pohon biner tidak kosong; P adalah pohon  */
/* unerright : hanya mempunyai subpohon kanan          	      */
boolean IsUnerRight(BinTree P);

/* Mengirimkan true jika pohon biner tidak kosong; P adalah pohon */
/* biner : mempunyai subpohon kiri dan subpohon kanan 	     */
boolean IsBiner(BinTree P);

/* ************* TRAVERSAL   ************* */

/* I.S  : P terdefinisi   					       */
/* F.S  : semua simpul P sudah diproses secara Preorder; akar, kiri */
/*        kanan (dengan Proses (P)) 				       */
/* Basis : pohon kosong  : tidak ada yang diproses		       */
/* Rekurens : Prosees Akar(P); Proses secara Preorder(Left(P));     */	
/*            Proses secara  Preorder(Right(P)); 		       */
void Preorder(BinTree P);

/* I.S  : P terdefinisi   					      */
/* F.S  : semua simpul P sudah diproses secara Inorder; kiri, akar */
/*        kanan (dengan Proses (P)) 				      */
void Inorder(BinTree P);

/* I.S  : P terdefinisi   					    */
/* F.S  : semua simpul P sudah diproses secara Postorder; kiri,  */    
/* 	     kanan, akar (dengan Proses (P)) 			    */
void Postorder(BinTree P);

/* I.S  : P terdefinisi                          	*/
/* F.S  : semua simpul P sudah ditulis / preorder	*/
void PrintTree(BinTree P);

/* *********** MEMBENTUK BALANCE TREE ************* */

/* I.S  : P terdefinisi                          	*/
/* F.S  : semua simpul P sudah ditulis / preorder	*/
void DestroyTree(BinTree *P);

address Search2(BinTree T,infotype X);

/* Menghasilkan sebuah balance tree dengan n node, nilai setiap */
/* node dibaca 						   */
BinTree BuildBalanceTree(int n);

/* Menambahkan sebuah node X, ke  pohon biner pencarian P */
/* infotype terdiri dsari key dan count. Key menunjukkan  */	
/* nilai unik, dan Count berapa kali muncul  ; */	
/* Basis :  pohon kosong */
/* Rekurens  : jika pohon tidak kosong, insert  ke anak   */
/*         	   kiri jika nilai  < info(P); insert ke anak */	
/*             kanan jika nilai > info(Akar); 	      */
/* Alokasi selalu berhasil 				      */
void InsSearchTree(BinTree *P,infotype X);

// Description              : Prosedur yang digunakan untuk mengubah tree menjadi bst
// Initial State            : Tree yang hanya mempunyai root
// Final State              : Tree yang sudah menjadi bst
// Author                   : Kartika Milenda, Farhan Nurzaman
// Reference                : https://www.geeksforgeeks.org/construct-a-binary-search-tree-from-given-postorder/
BinTree AddTree(BinTree P, infotype X);

#include "bt.c"
#endif
