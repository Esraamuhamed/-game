
#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
#include "bmplib.cpp"

using namespace std;
unsigned char image[SIZE][SIZE],pixels,rot[SIZE][SIZE],image2[SIZE][SIZE];


void loadImage ();
void saveImage ();
void blackandwhite();
void invertimage();
void Mergeimages();
void flipimage();
void Rotateimage();
void DarkenandLighten();
void Shrinkimage();
void Mirrorimage();
void Blurimage();

int main()
{
while (true){
    string choice;
    cout << "L- load image\n";
    cout << "1-Black and white\n";
    cout << "2-Invert image\n";
    cout << "3-Merge image\n";
    cout << "4-Flip image\n";
    cout << "5-Rotate image\n";
    cout << "6-Darken and lighten\n";
    cout << "9-Shrink image\n";
    cout << "a-Mirror image\n";
    cout << "c-Blur image\n";
    cout << "s-Save image\n";
    cout << "0-Exit\n";


    cout << "\nenter choice: " <<endl;
    cin >> choice;

  if (choice == "l"){
        loadImage();
    }
  if (choice == "1"){
     blackandwhite();
  }
  if (choice == "2"){
    invertimage();
  }
  if (choice == "3"){
    Mergeimages();
    char imageFileName[100];

   // Get gray scale image file name
   cout << "Enter another image to merge: ";
   cin >> imageFileName;

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   readGSBMP(imageFileName, image2);
  }
  if (choice == "4"){
    flipimage();
  }
  if (choice == "5"){
     Rotateimage();
  }
  if (choice == "6"){
    DarkenandLighten();
  }

  if (choice == "9"){
     Shrinkimage();
  }
  if (choice == "a"){
     Mirrorimage();
  }

  if (choice == "c"){
    Blurimage();
  }
  if (choice == "s"){
  saveImage();
  }
  if (choice == "0"){
    break;
  }
    }
  return 0;
}

//_________________________________________
void loadImage () {
   char imageFileName[100];


   cout << "Enter the source image file name: ";
   cin >> imageFileName;

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   readGSBMP(imageFileName, image);
}

//_________________________________________
void saveImage () {
   char imageFileName[100];


   cout << "Enter the target image file name: ";
   cin >> imageFileName;

   // Add to it .bmp extension and load image
   strcat (imageFileName, ".bmp");
   writeGSBMP(imageFileName, image);
}


//______________________________________
void blackandwhite() {
               for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j< SIZE; j++) {
            if (image[i][j]<127){
                image[i][j] = 0;
            }
            else if(image[i][j]>127) {
                image[i][j] = 255;
            }

        }
    }
}
//_________________________________________
void flipimage(){
    int n;
    unsigned char horImage[SIZE][SIZE];
    unsigned char verImage[SIZE][SIZE];
    cout << "1-Horizontally\n";
    cout << "2-Vertically\n";
    cout << "choose a number: " << endl;
    cin >> n;
    if (n==2){
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                verImage[(SIZE - 1 - i)][j] = image[i][j];
            }
        }
        for(int i = 0 ; i < SIZE ;++i){
            for(int j = 0 ; j < SIZE ; ++j){
                image[i][j] = verImage[i][j];
            }
        }
    }
    else if (n==1){
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                horImage[i][(SIZE - 1 - j)] = image[i][j];
            }
        }
        for(int i = 0 ; i < SIZE ;++i){
            for(int j = 0 ; j < SIZE ; ++j){
                image[i][j] = horImage[i][j];
            }
        }
    }

}
//_____________________________________
void invertimage(){
     for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {

    image[i][j]=255-image[i][j];
    }
  }

}
//_________________________________________
void Rotateimage(){
    int num;
cout<<"enter 1 for 90 deg or 2 for 270 deg or 3 for 180 deg : ";
cin>>num;
  for (int i = 0; i < (SIZE); i++) {
    for (int j = 0; j< (SIZE); j++) {

        switch(num){
     case(1) :
        rot[j][255-i]=image[i][j];
        break;
     case(2) :
          rot[255-j][i]=image[i][j];
          break;
     case(3) :
          rot[255-i][255-j]=image[i][j];
          break;
        }
    }
    }
    for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
        image[i][j]=rot[i][j];

    }
  }
}

//_______________________________________
void Mergeimages(){
     for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
            image[i][j]= ((image[i][j]+image2[i][j])/2 );

    }
  }
}
//_________________________________________
void DarkenandLighten(){
    int choose;
    cout<<"1-darken or 2-lighten: ";
    cin>>choose;

            if (choose==1){
                    for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
                    image [i][j]=(image[i][j]-(0.5*image[i][j]));

            }}}
            if (choose==2){

                    for (int i = 0; i < SIZE; i++) {
                        for (int j = 0; j< SIZE; j++) {
                            image[i][j]+=(255-image[i][j])/2 ;



}}}}
//_________________________________________
 void Shrinkimage(){
     cout<< "shrink to 1- (1/2) or 2- (1/3) or 3- (1/4)" <<endl ;
int choose ;
cin >> choose ;

if (choose==1){

  for (int i = 0; i < (SIZE); ++i) {
    for (int j = 0; j< (SIZE) ; ++j) {
               image[i/2][j/2]= image[i][j];
}
  }
     for (int i = 0; i < SIZE; i++) {
            for (int j =SIZE/2 ; j <SIZE; j++) {
                image[i][j]=255;
            }
        }
        for (int i = SIZE/2; i < SIZE; i++) {
            for (int j =0 ; j <SIZE; j++) {
                image[i][j]=255;
            }
        }

}
  if (choose==2) {

  for (int i = 0; i < (SIZE); ++i) {
    for (int j = 0; j< (SIZE) ; ++j) {
              image[i/3][j/3]=image[i][j];

}
  }

    for (int i = 0; i < SIZE; i++) {
            for (int j =SIZE/3 ; j <SIZE; j++) {
                image[i][j]=255;
            }
        }
        for (int i = SIZE/3; i < SIZE; i++) {
            for (int j =0 ; j <SIZE; j++) {
                image[i][j]=255;
            }
        }
}
  if (choose==3){
   for (int i = 0; i < (SIZE); ++i) {
    for (int j = 0; j< (SIZE) ; ++j) {
              image[i/4][j/4]=image[i][j];

}
  }

   for (int i = 0; i < SIZE; i++) {
            for (int j =SIZE/4 ; j <SIZE; j++) {
                image[i][j]=255;
            }
        }
        for (int i = SIZE/4; i < SIZE; i++) {
            for (int j =0 ; j <SIZE; j++) {
                image[i][j]=255;
            }
        }
 }}
//_________________________________________

 void Mirrorimage()
 {
     int choice;
     cout << "1- left 1/2 \n";
     cout << "2- Right 1/2 \n";
     cout << "3- upper 1/2 \n";
     cout << "4- lower 1/2 \n";

     cout << "enter a choice : \n";
     cin >> choice;
     if (choice == 4){
    for (int i = 0 ; i<SIZE/2 ; ++i)
    {
        for (int j = 0 ; j<SIZE; ++j)
        {
            image[i][j]=image[SIZE-i][j];
         }
    }
    }
    else if (choice == 3){
             for (int i = 0 ; i<SIZE/2 ; ++i)
    {
        for (int j = 0 ; j<SIZE; ++j)
        {
            image[SIZE-i][j]=image[i][j];
         }
    }
 }
 else if (choice == 2){
      for (int i = 0 ; i<SIZE ; ++i)
    {
        for (int j = 0 ; j<SIZE/2; ++j)
        {
            image[i][j]=image[i][SIZE-j];
         }
 }
 }
 else if (choice == 1){
      for (int i = 0 ; i<SIZE ; ++i)
    {
        for (int j = 0 ; j<SIZE/2; ++j)
        {
            image[i][SIZE-j]=image[i][j];
         }
 }
 }
 }

 //_________________________________________
 void Blurimage(){
    for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j< SIZE; j++) {
            for (int k=0 ; k<25 ; ++k){
            image[i][j]= ((image[i-2][j-2]+image[i-2][j-1]+image[i-2][j]+image[i-2][j+1]+image[i-2][j+2]+image[i-1][j-2]+image[i-1][j-1]+image[i-1][j]+image[i-1][j+1]+image[i-1][j+2]+image[i][j-2]+image[i][j-1]+image[i][j]+image[i][j+1]+image[i][j+2]+image[i+1][j-2]+image[i+1][j-1]+image[i+1][j]+image[i+1][j+1]+image[i+1][j+2]+image[i+2][j-2]+image[i+2][j-1]+image[i+2][j]+image[i+2][j+1]+image[i+2][j+2])/25);

            }
    }

            }
}
