///////////////////////////////////
///////HAVVANUR BOZÖMEROĞLU////////
///////////1306180022//////////////
//////////////////////////////////


#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;
const float pi=3.14159;
int findlength(int x1, int y1, int x2, int y2);

 class Simulate{
    public:
  int size, turn_count;
  string num;
  void writing(int x){            //matrix i oluşturmak için
    char project[x+1][x+1];
    for(int i=0; i<=x+1; i++){
        for(int k=0; k<=x+1; k++){
           if(k==0||k==x+1||i==x+1||i==0){
                project[i][k]= '-';
            }else project[i][k]= ' ';
        } } }
};

int main()
{
string num;
int size,turn_count;
   ifstream reading("input.txt");
    if(!reading.is_open()){
        cout<< "The file 'input.txt' open operation fails" << endl;
        exit(0);
    }
   Simulate homework;
    reading>> num;
    reading>>num;
    homework.size=stoi(num);
    size=stoi(num);
    reading>>num;
    reading>>num;
    homework.turn_count=stoi(num);
    turn_count=stoi(num);
    reading>>num;

    int entity1locationx=0;
    int entity1locationy=0;
    string entity1;
    string entity1location;
    string entity1case="normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity1=num;
        reading>>num;
        entity1location=num;
        entity1locationx=stoi(entity1location);
    reverse(entity1location.begin(),entity1location.end());
   int num1=stoi(entity1location);

   while(num1 > 0) {
   entity1locationy = entity1locationy*10 + num1%10;
   num1 = num1/10;
   }

        reading>>num;
        if(num.size()==8){
                entity1case=num;
                reading>>num;
        }
     }

    string entity2;
    string entity2location;
    int entity2locationx=0;
    int entity2locationy=0;
    string entity2case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity2=num;
        reading>>num;
        entity2location=num;

       entity2locationx=stoi(entity2location);
    reverse(entity2location.begin(),entity2location.end());
   int num1=stoi(entity2location);

   while(num1 > 0) {
   entity2locationy = entity2locationy*10 + num1%10;
   num1 = num1/10;
}

        reading>>num;
        if(num.size()==8){
                entity2case=num;
                reading>>num;
        }


}

    int entity3locationx=0;
    int entity3locationy=0;
    string entity3;
    string entity3location;
    string entity3case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity3=num;
        reading>>num;
        entity3location=num;
      entity3locationx=stoi(entity3location);
    reverse(entity3location.begin(),entity3location.end());
   int num1=stoi(entity3location);

   while(num1 > 0) {
   entity3locationy = entity3locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity3case=num;
                reading>>num;
        }

    }

    int entity4locationx=0;
    int entity4locationy=0;
    string entity4;
    string entity4location;
    string entity4case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity4=num;
        reading>>num;
        entity4location=num;
        entity4locationx=stoi(entity4location);
    reverse(entity4location.begin(),entity4location.end());
   int num1=stoi(entity4location);
   while(num1 > 0) {
   entity4locationy = entity4locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity4case=num;
                reading>>num;
        }
    }

    int entity5locationx=0;
    int entity5locationy=0;
    string entity5;
    string entity5location;
    string entity5case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity5=num;
        reading>>num;
        entity5location=num;
        entity5locationx=stoi(entity5location);
    reverse(entity5location.begin(),entity5location.end());
   int num1=stoi(entity5location);
   while(num1 > 0) {
   entity5locationy = entity5locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity5case=num;
                 reading>>num;
        }
    }

    int entity6locationx=0;
    int entity6locationy=0;
    string entity6;
    string entity6location;
    string entity6case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity6=num;
        reading>>num;
        entity6location=num;
        entity6locationx=stoi(entity6location);
    reverse(entity6location.begin(),entity6location.end());
   int num1=stoi(entity6location);
   while(num1 > 0) {
   entity6locationy = entity6locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity6case=num;
                reading>>num;
        }

    }

    int entity7locationx=0;
    int entity7locationy=0;
    string entity7;
    string entity7location;
    string entity7case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity7=num;
        reading>>num;
        entity7location=num;
        entity7locationx=stoi(entity7location);
    reverse(entity7location.begin(),entity7location.end());
   int num1=stoi(entity7location);
   while(num1 > 0) {
   entity7locationy = entity7locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity7case=num;
                reading>>num;
        }

    }

    int entity8locationx=0;
    int entity8locationy=0;
    string entity8;
    string entity8location;
    string entity8case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity8=num;
        reading>>num;
        entity8location=num;
        entity8locationx=stoi(entity8location);
    reverse(entity8location.begin(),entity8location.end());
   int num1=stoi(entity8location);

   while(num1 > 0) {
   entity8locationy = entity8locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity8case=num;
                 reading>>num;
        }
    }

    int entity9locationx=0;
    int entity9locationy=0;
    string entity9;
    string entity9location;
    string entity9case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity9=num;
        reading>>num;
        entity9location=num;
        entity9locationx=stoi(entity9location);
    reverse(entity9location.begin(),entity9location.end());
   int num1=stoi(entity9location);
   while(num1 > 0) {
   entity9locationy = entity9locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity9case=num;
                reading>>num;
        }
    }

    int entity10locationx=0;
    int entity10locationy=0;
    string entity10;
    string entity10location;
    string entity10case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity10=num;
        reading>>num;
        entity10location=num;
        entity10locationx=stoi(entity10location);
    reverse(entity10location.begin(),entity10location.end());
   int num1=stoi(entity10location);

   while(num1 > 0) {
   entity10locationy = entity10locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity10case=num;
                reading>>num;
        }
    }

    int entity11locationx=0;
    int entity11locationy=0;
    string entity11;
    string entity11location;
    string entity11case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity11=num;
        reading>>num;
        entity11location=num;
        entity11locationx=stoi(entity11location);
    reverse(entity11location.begin(),entity11location.end());
   int num1=stoi(entity11location);
   while(num1 > 0) {
   entity11locationy = entity11locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity11case=num;
                reading>>num;
        }
    }

    int entity12locationx=0;
    int entity12locationy=0;
    string entity12;
    string entity12location;
    string entity12case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity12=num;
        reading>>num;
        entity12location=num;
        entity12locationx=stoi(entity12location);
    reverse(entity12location.begin(),entity12location.end());
   int num1=stoi(entity12location);

   while(num1 > 0) {
   entity12locationy = entity12locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity12case=num;
                reading>>num;
        }
    }

    int entity13locationx=0;
    int entity13locationy=0;
    string entity13;
    string entity13location;
    string entity13case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity13=num;
        reading>>num;
        entity13location=num;
        entity13locationx=stoi(entity13location);
    reverse(entity13location.begin(),entity13location.end());
   int num1=stoi(entity13location);
   while(num1 > 0) {
   entity13locationy = entity13locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity13case=num;
                reading>>num;
        }
    }

    int entity14locationx=0;
    int entity14locationy=0;
    string entity14;
    string entity14location;
    string entity14case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity14=num;
        reading>>num;
        entity14location=num;
        entity14locationx=stoi(entity14location);
    reverse(entity14location.begin(),entity14location.end());
   int num1=stoi(entity14location);

   while(num1 > 0) {
   entity14locationy = entity14locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity14case=num;
                reading>>num;
        }
    }

    int entity15locationx=0;
    int entity15locationy=0;
    string entity15;
    string entity15location;
    string entity15case= "normal";
    if(num.size()==6){
        reading>>num;
        reading>>num;
        entity15=num;
        reading>>num;
        entity15location=num;
        entity15locationx=stoi(entity15location);
    reverse(entity15location.begin(),entity15location.end());
   int num1=stoi(entity15location);
   while(num1 > 0) {
   entity15locationy = entity15locationy*10 + num1%10;
   num1 = num1/10;
   }
        reading>>num;
        if(num.size()==8){
                entity15case=num;
                reading>>num;
        }
    }


int count1=0;
int countV1=0;
        for(int i=0; i<5; i++ ){
        if(entity1[i]=='A' || entity1[i]=='B' ||entity1[i]=='C' || entity1[i]=='D' ){
            count1++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity1[i]=='A' || entity1[i]=='B'){
            countV1++;
        }
                         }
int count2=0;
int countV2=0;
        for(int i=0; i<5; i++ ){
        if(entity2[i]=='A' || entity2[i]=='B' || entity2[i]=='C' || entity2[i]=='D' ){
            count2++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity2[i]=='A' || entity2[i]=='B'){
            countV2++;
        }
                        }
int count3=0;
int countV3=0;
        for(int i=0; i<5; i++ ){
        if(entity3[i]=='A' || entity3[i]=='B' || entity3[i]=='C' || entity3[i]=='D' ){
            count3++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity3[i]=='A' || entity3[i]=='B'){
            countV3++;
        }

    }
int count4=0;
int countV4=0;
        for(int i=0; i<5; i++ ){
        if(entity4[i]=='A' || entity4[i]=='B' || entity4[i]=='C' || entity4[i]=='D' ){
            count4++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity4[i]=='A' || entity4[i]=='B'){
            countV4++;
        }

    }
int count5=0;
int countV5=0;
        for(int i=0; i<5; i++ ){
        if(entity5[i]=='A' || entity5[i]=='B' || entity5[i]=='C' || entity5[i]=='D' ){
            count5++;
        }
         }
        for(int i=0; i<5; i++){

                if(entity5[i]=='A' || entity5[i]=='B'){
            countV5++;
        }

    }
int count6=0;
int countV6=0;
        for(int i=0; i<5; i++ ){
        if(entity6[i]=='A' || entity6[i]=='B' || entity6[i]=='C' || entity6[i]=='D' ){
            count6++;
        }
         }
        for(int i=0; i<5; i++){

                if(entity6[i]=='A' || entity6[i]=='B'){
            countV6++;
        }

    }
int count7=0;
int countV7=0;
        for(int i=0; i<5; i++ ){
        if(entity7[i]=='A' || entity7[i]=='B' || entity7[i]=='C' || entity7[i]=='D' ){
            count7++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity7[i]=='A' || entity7[i]=='B'){
            countV7++;
        }

    }
int count8=0;
int countV8=0;
        for(int i=0; i<5; i++ ){
        if(entity8[i]=='A' || entity8[i]=='B' || entity8[i]=='C' || entity8[i]=='D' ){
            count8++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity8[i]=='A' || entity8[i]=='B'){
            countV8++;
        }

    }
int count9=0;
int countV9=0;
        for(int i=0; i<5; i++ ){
        if(entity9[i]=='A' || entity9[i]=='B' || entity9[i]=='C' || entity9[i]=='D' ){
            count9++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity9[i]=='A' || entity9[i]=='B'){
            countV9++;
        } }
int count10=0;
int countV10=0;
        for(int i=0; i<5; i++ ){
        if(entity10[i]=='A' || entity10[i]=='B' || entity10[i]=='C' || entity10[i]=='D' ){
            count10++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity10[i]=='A' || entity10[i]=='B'){
            countV10++;
        }

    }
int count11=0;
int countV11=0;
        for(int i=0; i<5; i++ ){
        if(entity11[i]=='A' || entity11[i]=='B' || entity11[i]=='C' || entity11[i]=='D' ){
            count11++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity11[i]=='A' || entity11[i]=='B'){
            countV11++;
        }

    }
int count12=0;
int countV12=0;
        for(int i=0; i<5; i++ ){
        if(entity12[i]=='A' || entity12[i]=='B' || entity12[i]=='C' || entity12[i]=='D' ){
            count12++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity12[i]=='A' || entity12[i]=='B'){
            countV12++;
        }

    }
int count13=0;
int countV13=0;
        for(int i=0; i<5; i++ ){
        if(entity13[i]=='A' || entity13[i]=='B' || entity13[i]=='C' || entity13[i]=='D' ){
            count13++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity13[i]=='A' || entity13[i]=='B'){
            countV13++;
        }

    }
int count14=0;
int countV14=0;
        for(int i=0; i<5; i++ ){
        if(entity14[i]=='A' || entity14[i]=='B' || entity14[i]=='C' || entity14[i]=='D' ){
            count14++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity14[i]=='A' || entity14[i]=='B'){
            countV14++;
        }

    }
int count15=0;
int countV15=0;
        for(int i=0; i<5; i++ ){
        if(entity15[i]=='A' || entity15[i]=='B' || entity15[i]=='C' || entity15[i]=='D' ){
            count15++;
        }
    }
        for(int i=0; i<5; i++){

                if(entity15[i]=='A' || entity15[i]=='B'){
            countV15++;
        }

    }


  ofstream turnwriting("turns.txt");
    char project[size+1][size+1];
for(int i=0; i<=size+1; i++){
        for(int k=0; k<=size+1; k++){
        if(k==0||k==size+1||i==size+1||i==0){
                project[i][k]= '-';
            }else project[i][k]= ' ';
        } }


 int time1=0, time2=0, time3=0,time4=0, time5=0, time6=0, time7=0, time8=0, time9=0, time10=0, time11=0, time12=0, time13=0, time14=0, time15=0;

for(int x=1; x<=turn_count; x++){
  if(x!=1){
    reading>>num;
  }

                   if(entity1.size()!=0){
                    reading>>num;
                    reading>>num;
                    entity1location=num;
        entity1locationx=stoi(entity1location);

    reverse(entity1location.begin(),entity1location.end());
     if(entity1location.size()==4 && entity1locationx<10){
   entity1location.erase(entity1location.begin()+2,entity1location.end());
reverse(entity1location.begin(),entity1location.end());
entity1locationy=stoi (entity1location);
    }
    if(entity1location.size()==3 && entity1locationx<10){
    entity1location.erase(entity1location.begin()+2);
    entity1locationy=stoi (entity1location);
    }
    if(entity1location.size()==4 && entity1locationx>=10){
      entity1locationy=stoi (entity1location);
    }
    if(entity1location.size()==5 && entity1locationx>=10){
        entity1location.erase(2,3);
        reverse(entity1location.begin(),entity1location.end());
        entity1locationy=stoi (entity1location);
    }

                  }
                   if(entity2.size()!=0){
                    reading>>num;
                    entity2location=num;
        entity2locationx=stoi(entity2location);
reverse(entity2location.begin(),entity2location.end());

    if(entity2location.size()==4 && entity2locationx<10){
   entity2location.erase(entity2location.begin()+2,entity2location.end());
reverse(entity2location.begin(),entity2location.end());
entity2locationy=stoi (entity2location);
    }
    if(entity2location.size()==3 && entity2locationx<10){
    entity2location.erase(entity2location.begin()+2);
    entity2locationy=stoi (entity2location);
    }
    if(entity2location.size()==4 && entity2locationx>=10){
      entity2locationy=stoi (entity2location);
    }
    if(entity2location.size()==5 && entity2locationx>=10){
        entity2location.erase(2,3);
        reverse(entity2location.begin(),entity2location.end());
        entity2locationy=stoi (entity2location);
    }

     }
                   if(entity3.size()!=0){
                int num1=0;
                    reading>>num;
                    entity3location=num;
        entity3locationx=stoi(entity3location);
     reverse(entity3location.begin(),entity3location.end());
     if(entity3location.size()==4 && entity3locationx<10){
   entity3location.erase(entity3location.begin()+2,entity3location.end());
reverse(entity3location.begin(),entity3location.end());
entity3locationy=stoi (entity3location);
    }
    if(entity3location.size()==3 && entity3locationx<10){
    entity3location.erase(entity3location.begin()+2);
    entity3locationy=stoi (entity3location);
    }
    if(entity3location.size()==4 && entity3locationx>=10){
      entity3locationy=stoi (entity3location);
    }
    if(entity3location.size()==5 && entity3locationx>=10){
        entity3location.erase(2,3);
        reverse(entity3location.begin(),entity3location.end());
        entity3locationy=stoi (entity3location);
    }
    }
                   if(entity4.size()!=0){
                    reading>>num;
                    entity4location=num;
        entity4locationx=stoi(entity4location);
    reverse(entity4location.begin(),entity4location.end());
     if(entity4location.size()==4 && entity4locationx<10){
   entity4location.erase(entity4location.begin()+2,entity4location.end());
reverse(entity4location.begin(),entity4location.end());
entity4locationy=stoi (entity4location);
    }
    if(entity4location.size()==3 && entity4locationx<10){
    entity4location.erase(entity4location.begin()+2);
    entity4locationy=stoi (entity4location);
    }
    if(entity4location.size()==4 && entity4locationx>=10){
      entity4locationy=stoi (entity4location);
    }
    if(entity4location.size()==5 && entity4locationx>=10){
        entity4location.erase(2,3);
        reverse(entity4location.begin(),entity4location.end());
        entity4locationy=stoi (entity4location);
    }

                   }
                   if(entity5.size()!=0){

                    reading>>num;
                    entity5location=num;
        entity5locationx=stoi(entity5location);
    reverse(entity5location.begin(),entity5location.end());
    if(entity5location.size()==4 && entity5locationx<10){
   entity5location.erase(entity5location.begin()+2,entity5location.end());
reverse(entity5location.begin(),entity5location.end());
entity5locationy=stoi (entity5location);
    }
    if(entity5location.size()==3 && entity5locationx<10){
    entity5location.erase(entity5location.begin()+2);
    entity5locationy=stoi (entity5location);
    }
    if(entity5location.size()==4 && entity5locationx>=10){
      entity5locationy=stoi (entity5location);
    }
    if(entity5location.size()==5 && entity5locationx>=10){
        entity5location.erase(2,3);
        reverse(entity5location.begin(),entity5location.end());
        entity5locationy=stoi (entity5location);
    }

                   }
                   if(entity6.size()!=0){

                    reading>>num;
                    entity6location=num;
        entity6locationx=stoi(entity6location);
    reverse(entity6location.begin(),entity6location.end());
    if(entity6location.size()==4 && entity6locationx<10){
   entity6location.erase(entity6location.begin()+2,entity6location.end());
reverse(entity6location.begin(),entity6location.end());
entity6locationy=stoi (entity6location);
    }
    if(entity6location.size()==3 && entity6locationx<10){
    entity6location.erase(entity6location.begin()+2);
    entity6locationy=stoi (entity6location);
    }
    if(entity6location.size()==4 && entity6locationx>=10){
      entity6locationy=stoi (entity6location);
    }
    if(entity6location.size()==5 && entity6locationx>=10){
        entity6location.erase(2,3);
        reverse(entity6location.begin(),entity6location.end());
        entity6locationy=stoi (entity6location);
    }

                   }
                   if(entity7.size()!=0){

                    reading>>num;
                    entity7location=num;
        entity7locationx=stoi(entity7location);
    reverse(entity7location.begin(),entity7location.end());
    if(entity7location.size()==4 && entity7locationx<10){
   entity7location.erase(entity7location.begin()+2,entity7location.end());
reverse(entity7location.begin(),entity7location.end());
entity7locationy=stoi (entity7location);
    }
    if(entity7location.size()==3 && entity7locationx<10){
    entity7location.erase(entity7location.begin()+2);
    entity7locationy=stoi (entity7location);
    }
    if(entity7location.size()==4 && entity7locationx>=10){
      entity7locationy=stoi (entity7location);
    }
    if(entity7location.size()==5 && entity7locationx>=10){
        entity7location.erase(2,3);
        reverse(entity7location.begin(),entity7location.end());
        entity7locationy=stoi (entity7location);
    }

                   }
                   if(entity8.size()!=0){

                    reading>>num;
                    entity8location=num;
        entity8locationx=stoi(entity8location);
    reverse(entity8location.begin(),entity8location.end());
    if(entity8location.size()==4 && entity8locationx<10){
   entity8location.erase(entity8location.begin()+2,entity8location.end());
reverse(entity8location.begin(),entity8location.end());
entity8locationy=stoi (entity8location);
    }
    if(entity8location.size()==3 && entity8locationx<10){
    entity8location.erase(entity8location.begin()+2);
    entity8locationy=stoi (entity8location);
    }
    if(entity8location.size()==4 && entity8locationx>=10){
      entity8locationy=stoi (entity8location);
    }
    if(entity8location.size()==5 && entity8locationx>=10){
        entity8location.erase(2,3);
        reverse(entity8location.begin(),entity8location.end());
        entity8locationy=stoi (entity8location);
    }

                   }
                   if(entity9.size()!=0){

                    reading>>num;
                    entity9location=num;
        entity9locationx=stoi(entity9location);
    reverse(entity9location.begin(),entity9location.end());
    if(entity9location.size()==4 && entity9locationx<10){
   entity9location.erase(entity9location.begin()+2,entity9location.end());
reverse(entity9location.begin(),entity9location.end());
entity9locationy=stoi (entity9location);
    }
    if(entity9location.size()==3 && entity9locationx<10){
    entity9location.erase(entity9location.begin()+2);
    entity9locationy=stoi (entity9location);
    }
    if(entity9location.size()==4 && entity9locationx>=10){
      entity9locationy=stoi (entity9location);
    }
    if(entity9location.size()==5 && entity9locationx>=10){
        entity9location.erase(2,3);
        reverse(entity9location.begin(),entity9location.end());
        entity9locationy=stoi (entity9location);
    }

                   }
                   if(entity10.size()!=0){

                    reading>>num;
                    entity10location=num;
        entity10locationx=stoi(entity10location);
    reverse(entity10location.begin(),entity10location.end());
    if(entity10location.size()==4 && entity10locationx<10){
   entity10location.erase(entity10location.begin()+2,entity10location.end());
reverse(entity10location.begin(),entity10location.end());
entity10locationy=stoi (entity10location);
    }
    if(entity10location.size()==3 && entity10locationx<10){
    entity10location.erase(entity10location.begin()+2);
    entity10locationy=stoi (entity10location);
    }
    if(entity10location.size()==4 && entity10locationx>=10){
      entity10locationy=stoi (entity10location);
    }
    if(entity10location.size()==5 && entity10locationx>=10){
        entity10location.erase(2,3);
        reverse(entity10location.begin(),entity10location.end());
        entity10locationy=stoi (entity10location);
    }
                   }
                   if(entity11.size()!=0){

                    reading>>num;
                    entity11location=num;
        entity11locationx=stoi(entity11location);
    reverse(entity11location.begin(),entity11location.end());
    if(entity11location.size()==4 && entity11locationx<10){
   entity11location.erase(entity11location.begin()+2,entity11location.end());
reverse(entity11location.begin(),entity11location.end());
entity11locationy=stoi (entity11location);
    }
    if(entity11location.size()==3 && entity11locationx<10){
    entity11location.erase(entity11location.begin()+2);
    entity11locationy=stoi (entity11location);
    }
    if(entity11location.size()==4 && entity11locationx>=10){
      entity11locationy=stoi (entity11location);
    }
    if(entity11location.size()==5 && entity11locationx>=10){
        entity11location.erase(2,3);
        reverse(entity11location.begin(),entity11location.end());
        entity11locationy=stoi (entity11location);
    }
                   }
                   if(entity12.size()!=0){

                    reading>>num;
                    entity12location=num;
        entity12locationx=stoi(entity12location);
    reverse(entity12location.begin(),entity12location.end());
    if(entity12location.size()==4 && entity12locationx<10){
   entity12location.erase(entity12location.begin()+2,entity12location.end());
reverse(entity12location.begin(),entity12location.end());
entity12locationy=stoi (entity12location);
    }
    if(entity12location.size()==3 && entity12locationx<10){
    entity12location.erase(entity12location.begin()+2);
    entity12locationy=stoi (entity12location);
    }
    if(entity12location.size()==4 && entity12locationx>=10){
      entity12locationy=stoi (entity12location);
    }
    if(entity12location.size()==5 && entity12locationx>=10){
        entity12location.erase(2,3);
        reverse(entity12location.begin(),entity12location.end());
        entity12locationy=stoi (entity12location);
    }
                   }
                   if(entity13.size()!=0){

                    reading>>num;
                    entity13location=num;
        entity13locationx=stoi(entity13location);
    reverse(entity13location.begin(),entity13location.end());
    if(entity13location.size()==4 && entity13locationx<10){
   entity13location.erase(entity13location.begin()+2,entity13location.end());
reverse(entity13location.begin(),entity13location.end());
entity13locationy=stoi (entity13location);
    }
    if(entity13location.size()==3 && entity13locationx<10){
    entity13location.erase(entity13location.begin()+2);
    entity13locationy=stoi (entity13location);
    }
    if(entity13location.size()==4 && entity13locationx>=10){
      entity13locationy=stoi (entity13location);
    }
    if(entity13location.size()==5 && entity13locationx>=10){
        entity13location.erase(2,3);
        reverse(entity13location.begin(),entity13location.end());
        entity13locationy=stoi (entity13location);
    }
                   }
                   if(entity14.size()!=0){

                    reading>>num;
                    entity14location=num;
        entity14locationx=stoi(entity14location);
    reverse(entity14location.begin(),entity14location.end());
    if(entity14location.size()==4 && entity14locationx<10){
   entity14location.erase(entity14location.begin()+2,entity14location.end());
reverse(entity14location.begin(),entity14location.end());
entity14locationy=stoi (entity14location);
    }
    if(entity14location.size()==3 && entity14locationx<10){
    entity14location.erase(entity14location.begin()+2);
    entity14locationy=stoi (entity14location);
    }
    if(entity14location.size()==4 && entity14locationx>=10){
      entity14locationy=stoi (entity14location);
    }
    if(entity14location.size()==5 && entity14locationx>=10){
        entity14location.erase(2,3);
        reverse(entity14location.begin(),entity14location.end());
        entity14locationy=stoi (entity14location);
    }
                   }
                   if(entity15.size()!=0){

                    reading>>num;
                    entity15location=num;
        entity15locationx=stoi(entity15location);
    reverse(entity15location.begin(),entity15location.end());
    if(entity15location.size()==4 && entity15locationx<10){
   entity15location.erase(entity15location.begin()+2,entity15location.end());
reverse(entity15location.begin(),entity15location.end());
entity15locationy=stoi (entity15location);
    }
    if(entity15location.size()==3 && entity15locationx<10){
    entity15location.erase(entity15location.begin()+2);
    entity15locationy=stoi (entity15location);
    }
    if(entity15location.size()==4 && entity15locationx>=10){
      entity15locationy=stoi (entity15location);
    }
    if(entity15location.size()==5 && entity15locationx>=10){
        entity15location.erase(2,3);
        reverse(entity15location.begin(),entity15location.end());
        entity15locationy=stoi (entity15location);
    }
                   }


if(entity1.size()==5){
       if(entity1case.size()==8){
        project[entity1locationx][entity1locationy]='X';
       }
        if(entity1case.size()==4 && x<time1+20){
           project[entity1locationx][entity1locationy]='D';
           }
        if(entity1case.size()==9 || entity1case.size()==6){
            project[entity1locationx][entity1locationy]='O';
  }}
if(entity2.size()==5){
       if(entity2case.size()==8){
        project[entity2locationx][entity2locationy]='X';
       }

       if(entity2case.size()==4 && x<time2+20){
           project[entity2locationx][entity2locationy]='D';
           }
           if(entity2case.size()==9 || entity2case.size()==6){
            project[entity2locationx][entity2locationy]='O';
  } }
if(entity3.size()!=0){
       if(entity3case.size()==8){
        project[entity3locationx][entity3locationy]='X';
       }
       if(entity3case.size()==4 && x<time3+20){
           project[entity3locationx][entity3locationy]='D';
           }
           if(entity3case.size()==9 || entity3case.size()==6){
            project[entity3locationx][entity3locationy]='O';
  } }
if(entity4.size()!=0){
       if(entity4case.size()==8){
        project[entity4locationx][entity4locationy]='X';
       }
       if(entity4case.size()==4 && x<time4+20){
           project[entity4locationx][entity4locationy]='D';
           }
           if(entity4case.size()==9 || entity4case.size()==6){
            project[entity4locationx][entity4locationy]='O';
  } }
if(entity5.size()!=0){
       if(entity5case.size()==8){
        project[entity5locationx][entity5locationy]='X';
       }
       if(entity5case.size()==4 && x<time5+20){
           project[entity5locationx][entity5locationy]='D';
           }
           if(entity5case.size()==9 || entity5case.size()==6){
            project[entity5locationx][entity5locationy]='O';
  } }
if(entity6.size()!=0){
       if(entity6case.size()==8){
        project[entity6locationx][entity6locationy]='X';
       }
        if(entity6case.size()==4 && x<time6+20){
           project[entity6locationx][entity6locationy]='D';
           }
           if(entity6case.size()==9 || entity6case.size()==6){
            project[entity6locationx][entity6locationy]='O';
  } }
if(entity7.size()!=0){
       if(entity7case.size()==8){
        project[entity7locationx][entity7locationy]='X';
       }
       if(entity7case.size()==4 && x<time7+20){
           project[entity7locationx][entity7locationy]='D';
           }
           if(entity7case.size()==9 || entity7case.size()==6){
            project[entity7locationx][entity7locationy]='O';
  } }
if(entity8.size()!=0){
       if(entity8case.size()==8){
        project[entity8locationx][entity8locationy]='X';
       }
      if(entity8case.size()==4 && x<time8+20){
           project[entity8locationx][entity8locationy]='D';
           }
           if(entity8case.size()==9 || entity8case.size()==6){
            project[entity8locationx][entity8locationy]='O';
  } }
if(entity9.size()!=0){
       if(entity9case.size()==8){
        project[entity9locationx][entity9locationy]='X';
       }
       if(entity9case.size()==4 && x<time9+20){
           project[entity9locationx][entity9locationy]='D';
           }
           if(entity9case.size()==9 || entity9case.size()==6){
            project[entity9locationx][entity9locationy]='O';
  } }
if(entity10.size()!=0){
       if(entity10case.size()==8){
        project[entity10locationx][entity10locationy]='X';
       }
       if(entity10case.size()==4 && x<time10+20){
           project[entity10locationx][entity10locationy]='D';
           }
           if(entity10case.size()==9 || entity10case.size()==6){
            project[entity10locationx][entity10locationy]='O';
  } }
if(entity11.size()!=0){
       if(entity11case.size()==8){
        project[entity11locationx][entity11locationy]='X';
       }
       if(entity11case.size()==4 && x<time11+20){
           project[entity11locationx][entity11locationy]='D';
           }
           if(entity11case.size()==9 || entity11case.size()==6){
            project[entity11locationx][entity11locationy]='O';
  } }
if(entity12.size()!=0){
       if(entity12case.size()==8){
        project[entity12locationx][entity12locationy]='X';
       }
       if(entity12case.size()==4 && x<time12+20){
           project[entity12locationx][entity12locationy]='D';
           }
           if(entity12case.size()==9 || entity12case.size()==6){
            project[entity12locationx][entity12locationy]='O';
  } }
if(entity13.size()!=0){
       if(entity13case.size()==8){
        project[entity13locationx][entity13locationy]='X';
       }
       if(entity13case.size()==4 && x<time13+20){
           project[entity13locationx][entity13locationy]='D';
           }
           if(entity13case.size()==9 || entity13case.size()==6){
            project[entity13locationx][entity13locationy]='O';
  } }
if(entity14.size()!=0){
       if(entity14case.size()==8){
        project[entity14locationx][entity14locationy]='X';
       }
       if(entity14case.size()==4 && x<time14+20){
           project[entity14locationx][entity14locationy]='D';
           }
           if(entity14case.size()==9 || entity14case.size()==6){
            project[entity14locationx][entity14locationy]='O';
  } }
if(entity15.size()!=0){
       if(entity15case.size()==8){
        project[entity15locationx][entity15locationy]='X';
       }
       if(entity15case.size()==4 && x<time15+20){
           project[entity15locationx][entity15locationy]='D';
           }
           if(entity15case.size()==9 || entity15case.size()==6){
            project[entity15locationx][entity15locationy]='O';
  } }


   turnwriting << "\nTURN " << x << endl;
    for(int i=0; i<=size+1; i++){
        for(int k=0; k<=size+1; k++){

            turnwriting<< project[i][k];

        }
        turnwriting<< endl;

    }


for(int i=0; i<=size+1; i++){
        for(int k=0; k<=size+1; k++){

            if(k==0||k==size+1||i==size+1||i==0){
                project[i][k]= '-';
            }else project[i][k]= ' ';
        }

}


if(entity1case.size()==8 && x>3 ){
           int length1;
           if(entity2.size()==5 && entity2case.size()==6){
                length1= findlength(entity1locationx, entity1locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }

           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }
           }

           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }
           }

           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity1locationx, entity1locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }

    }
if(entity2case[0]=='i' && x>3 ){
           int length1;

            if(entity1.size()==5 && entity1case.size()==6){

                length1= findlength(entity2locationx, entity2locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){

                entity1case="infected";
                time1=x;

           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }
           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;

           }
           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity2locationx, entity2locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity3case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity3locationx, entity3locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }

           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }
           }

           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity3locationx, entity3locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity4case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity4locationx, entity4locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }

           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }
           }

           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity4locationx, entity4locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity5case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity5locationx, entity5locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }
           }

           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;

           }
           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity5locationx, entity5locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity6case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity6locationx, entity6locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;

           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }

           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity3locationx, entity3locationy );

          if(length1==0 && countV3>=1){
               entity3case="infected";
               time3=x;

           }
           }

           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
               time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;

           }
           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }

           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }

           }
           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity6locationx, entity6locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity7case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity7locationx, entity7locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }
           }

           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }
           }

           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity7locationx, entity7locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity8case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity8locationx, entity8locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time8=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }
           }

           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;

           }
           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;

           }
           }
           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity8locationx, entity8locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity9case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity9locationx, entity9locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }

           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;

           }
           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity9locationx, entity9locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity10case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity10locationx, entity10locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }

           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;

           }
           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;

           }
           }
           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity10locationx, entity10locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity11case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity11locationx, entity11locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }

           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }

           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;

           }
           }
           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity11locationx, entity11locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity12case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity12locationx, entity12locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }

           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }

           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity12locationx, entity12locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity13case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity13locationx, entity13locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }

           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }

           }
           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity13locationx, entity13locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity14case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity14locationx, entity14locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }

           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }

           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }
           }

           if(entity15.size()==5 && entity15case.size()==6){
           length1= findlength(entity14locationx, entity14locationy, entity15locationx, entity15locationy );
           if(length1==0 && countV15>=1){
                entity15case="infected";
                time15=x;
           }
           }
}
if(entity15case[0]=='i' && x>3 ){
           int length1;
           if(entity1.size()==5 && entity1case.size()==6){
                length1= findlength(entity15locationx, entity15locationy, entity1locationx, entity1locationy );
           if(length1==0 && countV1>=1){
                entity1case="infected";
                time1=x;
           }
           }
           if(entity2.size()==5 && entity2case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity2locationx, entity2locationy );
           if(length1==0 && countV2>=1){
                entity2case="infected";
                time2=x;
           }
           }
           if(entity3.size()==5 && entity3case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity3locationx, entity3locationy );
           if(length1==0 && countV3>=1){
                entity3case="infected";
                time3=x;
           }
           }
           if(entity4.size()==5 && entity4case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity4locationx, entity4locationy );
           if(length1==0 && countV4>=1){
                entity4case="infected";
                time4=x;
           }
           }
           if(entity5.size()==5 && entity5case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity5locationx, entity5locationy );
           if(length1==0 && countV5>=1){
                entity5case="infected";
                time5=x;
           }
           }
           if(entity6.size()==5 && entity6case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity6locationx, entity6locationy );
           if(length1==0 && countV6>=1){
                entity6case="infected";
                time6=x;
           }
           }
           if(entity7.size()==5 && entity7case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity7locationx, entity7locationy );
           if(length1==0 && countV7>=1){
                entity7case="infected";
                time7=x;
           }
           }
           if(entity8.size()==5 && entity8case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity8locationx, entity8locationy );
           if(length1==0 && countV8>=1){
                entity8case="infected";
                time8=x;
           }
           }
           if(entity9.size()==5 && entity9case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity9locationx, entity9locationy );
           if(length1==0 && countV9>=1){
                entity9case="infected";
                time9=x;
           }
           }
           if(entity10.size()==5 && entity10case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity10locationx, entity10locationy );
           if(length1==0 && countV10>=1){
                entity10case="infected";
                time10=x;
           }
           }
           if(entity11.size()==5 && entity11case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity11locationx, entity11locationy );
           if(length1==0 && countV11>=1){
                entity11case="infected";
                time11=x;
           }
           }

           if(entity12.size()==5 && entity12case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity12locationx, entity12locationy );
           if(length1==0 && countV12>=1){
                entity12case="infected";
                time12=x;
           }

           }
           if(entity13.size()==5 && entity13case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity13locationx, entity13locationy );
           if(length1==0 && countV13>=1){
                entity13case="infected";
                time13=x;
           }
           }

           if(entity14.size()==5 && entity14case.size()==6){
           length1= findlength(entity15locationx, entity15locationy, entity14locationx, entity14locationy );
           if(length1==0 && countV14>=1){
                entity14case="infected";
                time14=x;
           }
           }
}


if(x==time1+14){
    if(entity1.size()==5 && entity1case.size()==8 && count1>2){
        entity1case="dead";
    }
}
if(entity1case.size()==4 && x==time1+20){
    project[entity1locationx][entity1locationy]=' ';
     }
if(x==time2+14){
    if(entity2.size()==5 && entity2case.size()==8 && count2>2){
        entity2case="dead";
    }
}
if(entity2case.size()==4 && x==time2+20){
     project[entity2locationx][entity2locationy]=' ';

    }
if(x==time3+14){
    if(entity3.size()==5 && entity3case.size()==8 && count3>2){
        entity3case="dead";
    }
}
if(entity3case.size()==4 && x==time3+20){
    project[entity3locationx][entity3locationy]=' ';
     }
if(x==time4+14){
    if(entity4.size()==5 && entity4case.size()==8 && count4>2){
        entity4case="dead";
    }
}
if(entity4case.size()==4 && x==time4+20){
    project[entity4locationx][entity4locationy]=' ';
     }
if(x==time5+14){
if(entity5.size()==5 && entity5case.size()==8 && count5>2){
        entity5case="dead";
    }
}
if(entity5case.size()==4 && x==time5+20){
   project[entity5locationx][entity5locationy]=' ';
     }
if(x==time6+14){
    if(entity6.size()==5 && entity6case.size()==8 && count6>2){
        entity6case="dead";
    }
}
if(entity6case.size()==4 && x==time6+20){
    project[entity6locationx][entity6locationy]=' ';
      }
if(x==time7+14){
    if(entity7.size()==5 && entity7case.size()==8 && count7>2){
        entity7case="dead";
    }
}
if(entity7case.size()==4 && x==time7+20){
     project[entity7locationx][entity7locationy]=' ';
}
if(x==time8+14){
    if(entity8.size()==5 && entity8case.size()==8 && count8>2){
        entity8case="dead";
    }
}
if(entity8case.size()==4 && x==time8+20){
     project[entity8locationx][entity8locationy]=' ';
}
if(x==time9+14){
    if(entity9.size()==5 && entity9case.size()==8 && count9>2){
        entity9case="dead";
    }
}
if(entity9case.size()==4 && x==time9+20){
     project[entity9locationx][entity9locationy]=' ';
    }
if(x==time10+14){
    if(entity10.size()==5 && entity10case.size()==8 && count10>2){
        entity10case="dead";
    }
}
if(entity10case.size()==4 && x==time10+20){
     project[entity10locationx][entity10locationy]=' ';
    }
if(x==time11+14){
    if(entity11.size()==5 && entity11case.size()==8 && count11>2){
        entity11case="dead";
    }
}
if(entity11case.size()==4 && x==time11+20){
     project[entity11locationx][entity11locationy]=' ';
    }
if(x==time12+14){
    if(entity12.size()==5 && entity12case.size()==8 && count12>2){
        entity12case="dead";
    }
}
if(entity12case.size()==4 && x==time12+20){
     project[entity12locationx][entity12locationy]=' ';
    }
if(x==time13+14){
    if(entity13.size()==5 && entity13case.size()==8 && count13>2){
        entity13case="dead";
    }
}
if(entity13case.size()==4 && x==time13+20){
     project[entity13locationx][entity13locationy]=' ';
    }
if(x==time14+14){
    if(entity14.size()==5 && entity14case.size()==8 && count14>2){
        entity14case="dead";
    }
}
if(entity14case.size()==4 && x==time14+20){
     project[entity14locationx][entity14locationy]=' ';
    }
if(x==time15+14){
    if(entity15.size()==5 && entity15case.size()==8 && count15>2){
        entity15case="dead";
    }
}
if(entity15case.size()==4 && x==time15+20){
     project[entity15locationx][entity15locationy]=' ';
    }

    if(x==time1+30 && entity1case.size()==8){
        entity1case="recovered";
    }
    if(x==time2+30 && entity2case.size()==8){
        entity2case="recovered";
    }
    if(x==time3+30 && entity3case.size()==8){
        entity3case="recovered";
    }
    if(x==time4+30 && entity4case.size()==8){
        entity4case="recovered";
    }
    if(x==time5+30 && entity5case.size()==8){
        entity5case="recovered";
    }
    if(x==time6+30 && entity6case.size()==8){
        entity6case="recovered";
    }
    if(x==time7+30 && entity7case.size()==8){
        entity7case="recovered";
    }
    if(x==time8+30 && entity8case.size()==8){
        entity8case="recovered";
    }
    if(x==time9+30 && entity9case.size()==8){
        entity9case="recovered";
    }
    if(x==time10+30 && entity10case.size()==8){
        entity10case="recovered";
    }
    if(x==time11+30 && entity11case.size()==8){
        entity11case="recovered";
    }
    if(x==time12+30 && entity12case.size()==8){
        entity12case="recovered";
    }
    if(x==time13+30 && entity13case.size()==8){
        entity13case="recovered";
    }
    if(x==time14+30 && entity14case.size()==8){
        entity14case="recovered";
    }
    if(x==time15+30 && entity15case.size()==8){
        entity15case="recovered";
    }
           }


           int normal=0, infected=0, reco=0, dead=0;

           if(entity1.size()==5 && entity1case.size()==6) normal++;
           if(entity2.size()==5 && entity2case.size()==6) normal++;
           if(entity3.size()==5 && entity3case.size()==6) normal++;
           if(entity4.size()==5 && entity4case.size()==6) normal++;
           if(entity5.size()==5 && entity5case.size()==6) normal++;
           if(entity6.size()==5 && entity6case.size()==6) normal++;
           if(entity7.size()==5 && entity7case.size()==6) normal++;
           if(entity8.size()==5 && entity8case.size()==6) normal++;
           if(entity9.size()==5 && entity9case.size()==6) normal++;
           if(entity10.size()==5 && entity10case.size()==6) normal++;
           if(entity11.size()==5 && entity11case.size()==6) normal++;
           if(entity12.size()==5 && entity12case.size()==6) normal++;
           if(entity13.size()==5 && entity13case.size()==6) normal++;
           if(entity14.size()==5 && entity14case.size()==6) normal++;
           if(entity15.size()==5 && entity15case.size()==6) normal++;
           if(entity1case.size()==8) infected++;
           if(entity2case.size()==8) infected++;
           if(entity3case.size()==8) infected++;
           if(entity4case.size()==8) infected++;
           if(entity5case.size()==8) infected++;
           if(entity6case.size()==8) infected++;
           if(entity7case.size()==8) infected++;
           if(entity8case.size()==8) infected++;
           if(entity9case.size()==8) infected++;
           if(entity10case.size()==8) infected++;
           if(entity11case.size()==8) infected++;
           if(entity12case.size()==8) infected++;
           if(entity13case.size()==8) infected++;
           if(entity14case.size()==8) infected++;
           if(entity15case.size()==8) infected++;
           if(entity1case.size()==4) dead++;
           if(entity2case.size()==4) dead++;
           if(entity3case.size()==4) dead++;
           if(entity4case.size()==4) dead++;
           if(entity5case.size()==4) dead++;
           if(entity6case.size()==4) dead++;
           if(entity7case.size()==4) dead++;
           if(entity8case.size()==4) dead++;
           if(entity9case.size()==4) dead++;
           if(entity10case.size()==4) dead++;
           if(entity11case.size()==4) dead++;
           if(entity12case.size()==4) dead++;
           if(entity13case.size()==4) dead++;
           if(entity14case.size()==4) dead++;
           if(entity15case.size()==4) dead++;
           if(entity1case.size()==9) reco++;
           if(entity2case.size()==9) reco++;
           if(entity3case.size()==9) reco++;
           if(entity4case.size()==9) reco++;
           if(entity5case.size()==9) reco++;
           if(entity6case.size()==9) reco++;
           if(entity7case.size()==9) reco++;
           if(entity8case.size()==9) reco++;
           if(entity9case.size()==9) reco++;
           if(entity10case.size()==9) reco++;
           if(entity11case.size()==9) reco++;
           if(entity12case.size()==9) reco++;
           if(entity13case.size()==9) reco++;
           if(entity14case.size()==9) reco++;
           if(entity15case.size()==9) reco++;




           ofstream outwriting("output.txt");
           outwriting<< "Normal:    " << normal << endl;
           outwriting<< "Infected:  " <<infected << endl;
           outwriting<< "Dead:      " << dead << endl;
           outwriting<< "Recovered: " << reco << endl;
        if(entity1.size()==5){
            outwriting<< "entity 1 " << entity1locationx << "x" << entity1locationy << " " << entity1case <<endl;
        }
        if(entity2.size()==5){
            outwriting<< "entity 2 " << entity2locationx << "x" << entity2locationy << " " << entity2case <<endl;
        }
        if(entity3.size()==5){
            outwriting<< "entity 3 " << entity3locationx << "x" << entity3locationy << " " << entity3case <<endl;
        }
        if(entity4.size()==5){
            outwriting<< "entity 4 " << entity4locationx << "x" << entity4locationy << " " << entity4case <<endl;
        }
        if(entity5.size()==5){
            outwriting<< "entity 5 " << entity5locationx << "x" << entity5locationy << " " << entity5case <<endl;
        }
        if(entity6.size()==5){
            outwriting<< "entity 6 " << entity6locationx << "x" << entity6locationy << " " << entity6case <<endl;
        }
        if(entity7.size()==5){
            outwriting<< "entity 7 " << entity7locationx << "x" << entity7locationy << " " << entity7case <<endl;
        }
        if(entity8.size()==5){
            outwriting<< "entity 8 " << entity8locationx << "x" << entity8locationy << " " << entity8case <<endl;
        }
        if(entity9.size()==5){
            outwriting<< "entity 9 " << entity9locationx << "x" << entity9locationy << " " << entity9case <<endl;
        }
        if(entity10.size()==5){
            outwriting<< "entity 10 " << entity10locationx << "x" << entity10locationy << " " << entity10case <<endl;
        }
        if(entity11.size()==5){
            outwriting<< "entity 11 " << entity11locationx << "x" << entity11locationy << " " << entity11case <<endl;
        }
        if(entity12.size()==5){
            outwriting<< "entity 12 " << entity12locationx << "x" << entity12locationy << " " << entity12case <<endl;
        }
        if(entity13.size()==5){
            outwriting<< "entity 13 " << entity13locationx << "x" << entity13locationy << " " << entity13case <<endl;
        }
        if(entity14.size()==5){
            outwriting<< "entity 14 " << entity14locationx << "x" << entity14locationy << " " << entity14case <<endl;
        }
        if(entity15.size()==5){
            outwriting<< "entity 15 " << entity15locationx << "x" << entity15locationy << " " << entity15case <<endl;
        }


       outwriting.close();
       turnwriting.close();
       reading.close();

}
int findlength(int x1, int y1, int x2, int y2){
         int x=x1-x2;
         if(x<0) x=-x;
         if(x>0) x=x;

         int y=y1-y2;
         if(y<0) y=-y;
         if(y>0) y=y;

         int hipo=sqrt(x*x+y*y);

if(hipo>3){
         return 1;
}else return 0;

}

