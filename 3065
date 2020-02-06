#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;
//verifica se é unidade dezena ou centena
int numeracao(string x,int tamanho){
  int i,cont=0;
  for(i=tamanho;i<tamanho+3;i++){
    
    if(x[i]=='+' || x[i]=='-' || x[i]== NULL){
      
      break;
    }
    cont++;
    
  }
  return cont;
}



//codigo horriveeeell, mas foi  aceito
int main() {
  string conta,aux1,aux2,aux3;
  int i,tamanho,resp=0,conta1,conta2,conta3,qnt=0,cont=0,unidade=0;
  int z=0;
  int k;



  while(true){

  cin>>k;
  if(k==0){
    break;
  }
  cin>>conta;
  tamanho = conta.size();
  

 //guarda a primeira



  unidade = numeracao(conta,0);
  
  if(unidade==1){
    aux1= conta[0];      
    conta1= stoi(aux1);
    resp = conta1;
  }
  else if(unidade==2){
    aux1=conta[0];
    aux2 =conta[1];
    conta1= stoi(aux1)*10;
    conta2 = stoi(aux2);
    resp=conta1+conta2; 
  }
  else if(unidade==3){
    aux1=conta[0];
    aux2 =conta[1];
    aux3 =conta[2];
    conta1= stoi(aux1)*100;
    conta2 = stoi(aux2)*10;
    conta3 = stoi(aux3);
    resp=conta1+conta2+conta3; 

  }


  for(i=unidade;i<tamanho;i++){
    if(conta[i] == '+'){
    z = numeracao(conta,i+1);
    
      if(z==1){
        
    aux1= conta[i+1];      
    conta1= stoi(aux1);
    resp += conta1;
  }
  else if(z==2){
    
    aux1=conta[i+1];
    aux2 =conta[i+2];
    conta1= stoi(aux1)*10;
    conta2 = stoi(aux2);
    resp+=conta1+conta2; 
  }
  else if(z==3){
    
    aux1=conta[i+1];
    aux2 =conta[i+2];
    aux3 =conta[i+3];
    conta1= stoi(aux1)*100;
    conta2 = stoi(aux2)*10;
    conta3 = stoi(aux3);
    resp+=conta1+conta2+conta3; 

  }
    }


  if(conta[i] == '-'){
    z = numeracao(conta,i+1);
    
      if(z==1){
        
    aux1= conta[i+1];      
    conta1= stoi(aux1);
    resp -= conta1;
  }
  else if(z==2){
    
    aux1=conta[i+1];
    aux2 =conta[i+2];
    conta1= stoi(aux1)*10;
    conta2 = stoi(aux2);
    resp-=conta1+conta2; 
  }
  else if(z==3){
    
    aux1=conta[i+1];
    aux2 =conta[i+2];
    aux3 =conta[i+3];
    conta1= stoi(aux1)*100;
    conta2 = stoi(aux2)*10;
    conta3 = stoi(aux3);
    resp-=conta1+conta2+conta3; 

  }
    }  
  }
  
  
 
  cont++;

  cout << "Teste "<< cont <<"\n" << resp<<"\n"<< endl;
  
  
  }
}
