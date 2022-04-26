#include<iostream>
using namespace std;

void ShellSort(int sort[], int size){ //fungsi shell sort dengan parameter sort[] dan size masing-masing bertipe data INT
	for(int gap = size/2; gap > 0; gap /= 2){
		for(int x = gap; x < size; x++){
			int temp = sort[x];
			int y;
			for(y = x; y >= gap && sort[y-gap] > temp; y -= gap){
				sort[y] = sort[y-gap];
			} 
			sort[y] = temp;
		}
	}
}

//main program
int main(){ 
	//mengisikan batas array 
	int ukuran;
	cout<<"Masukkan Batas Array\t: "; 
	cin>>ukuran;		
					
	
	int sort[ukuran];//deklarasi varibel array (sort) dengan batas elemen dari inputan variabel (ukuran)
	cout<<"Masukkan Elemen Array\t: ";
	/*
	perulangan for inisialisasi x dimulai 0 dengan batas x kurang dari ukuran
	dan x diincrement
	*/
	for(int x = 0; x < ukuran; x++){
		cin>>sort[x];
	}
	ShellSort(sort, ukuran);//memanggil fungsi ShellSort
	cout<<"Array Setelah diSortir\t: ";//menampilkan array setelah disortir
	for(int x = 0; x < ukuran; x++){
		cout<<"["<<sort[x]<<"]"<<"\t";
	}
	
}
