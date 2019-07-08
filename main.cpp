#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <string.h>
#include "MenuDong.h"
using namespace std;
#define MAXLIST 100

// khai bao cau truc 
struct DanhMucSach {
	string maSach;
	unsigned int trangThai;
	string viTri;
};
typedef struct DanhMucSach DMS;

struct listDMS {
	DMS info;
	struct listDMS *Next;
};
typedef struct listDMS *LIST_DMS;


struct DauSach{
	string ISBDN;
	string tenSang;
	unsigned int soTrang;
	string tacGia;
	unsigned int namXuatBan;
	string theLoai;
	DMS *dms;
};
typedef struct DauSach DS;

struct nodeDS{
	int n;
	DS nodeDS[MAXLIST];
};
typedef struct nodeDS *NODE_DS;

struct MuonSach{
	string maSach;
	int ngayMuon;
	int ngayTra; // 2 cai nay tuong doi, se sua lai
	unsigned int trangThai;
};
typedef struct MuonSach MS;

struct nodeMS{
	MS info;
	nodeMS *left,*right;
};
typedef struct nodeMS *NODE_MS;

struct DocGia{
	int maThe;
	string ho;
	string ten;
	char gioiTinh;
	int trangThai;
	MS *ms;
};
typedef struct DocGia DG;

struct nodeDG{
	int key;
	DG info;
	nodeDG *left;
	nodeDG *right;
};
typedef struct nodeDG *NODE_DG;
// ----------------------------------------


int main(){
	int chon=0;
	 chon = MenuDong (menu);
	return 0;
}
