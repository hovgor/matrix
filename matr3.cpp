#include <iostream>
int main(){
std::cout<<"enter matrix size: ";
int size;
std::cin>>size;
std::cout<<"enter matrix value \n";
int** arr=new int*[size];
for(int i =0; i < size; ++i){
   arr[i]=new int[size];
}
 for(int i = 0; i <size; ++i){
     for(int j = 0; j < size; ++j){
        std::cin>>arr[i][j];
      }
  }
std::cout<< "esi ojandk gicna\n";
for(int i = 0; i <size; ++i){
 std::cout<<arr[i][i]<<std::endl;
 }
std::cout<<"ajic dzax tarberak@\n";
for(int i = 0; i < size; ++i){
	std::cout<<arr[i][size-1-i]<<std::endl;
 }

for(int i = size - 1 ; i >= 0; --i){
  delete [] arr[i];
}
arr= nullptr;
return 0;}
