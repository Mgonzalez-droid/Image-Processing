#ifndef Image_h
#define Image_h

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Image{

    struct Pixel{
        unsigned char blue;
        unsigned char green;
        unsigned char red;
        
        Pixel(){
        }
        
        void toString(){
            cout << "Blue: " << (int) blue << "\nGreen: " << (int) green << "\nRed: " << (int) red << endl << endl;
        }
    };
    
    struct Header{
        char idLength;
        char colorMapType;
        char dataTypeCode;
        short colorMapOrigin;
        short colorMapLength;
        char colorMapDepth;
        short xOrigin;
        short yOrigin;
        short width;
        short height;
        char bitsPerPixel;
        char imageDescriptor;
        
        Header(){
            this -> idLength = 0;
            this -> colorMapType = 0;
            this -> dataTypeCode = 2;
            this -> colorMapOrigin = 0;
            this -> colorMapLength = 0;
            this -> colorMapDepth = 0;
            this -> xOrigin = 0;
            this -> yOrigin = 0;
            this -> width = 0;
            this -> height = 0;
            this -> bitsPerPixel = 24;
            this -> imageDescriptor = 0;
        }
        
        void toString(){
            
            cout << "ID Length: " << (int) idLength << "\nColor Map Type: " << (int) colorMapType << "\nData type code: " << (int) dataTypeCode << "\nColor Map Origin: " << (int) colorMapOrigin << "\nColor Map Length: " << (int) colorMapLength << "\nColor Map Depth: " << (int) colorMapDepth << "\nX Origin: " << (int) xOrigin << "\nY Origin: " << (int) yOrigin << "\nWidth: " << (int) width << "\nHeight: " << (int) height << "\nBits per pixel: " << (int) bitsPerPixel << "\nImage Descriptor: " << (int) imageDescriptor << endl << endl;
            
        }
        
    };
    
    string filepath;
    Header header;
    vector<Pixel> imageData;
    string fileName;
    
    //Pixel* imageData;
    
    Image(){
    }
    
    Image(ifstream &file);
    void Deserialization(ifstream &file);
    void toString();
    void assignHeader(Image&);
    
    Image operator+(Image&);
    Image operator+(int);
    Image operator-(Image&);
    Image operator-(int);
    Image operator*(Image&);
    Image operator*(int);
    Image operator/(Image&);
    Image operator/(int);
    
    void Serialization(ofstream &file);
};

#endif /* Image_h */
