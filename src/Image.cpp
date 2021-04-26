#include <stdio.h>
#include <fstream>
#include "Image.h"
using namespace std;


//Prototypes
float roundValue(float&);
//char denormalize(float number);
//float normalized(int& number);

Image::Image(ifstream &file){
    Deserialization(file);
}

Image Image::operator+(Image& rhs){
    
    Image C;
    Image::Pixel tempPixel;
    
    for(int i = 0; i < rhs.imageData.size(); i++){
        
        if((this-> imageData[i].red + rhs.imageData[i].red) <= 255  && (this-> imageData[i].red + rhs.imageData[i].red) >= 0){
            tempPixel.red = this-> imageData[i].red + rhs.imageData[i].red;
        } else{
            if((this-> imageData[i].red + rhs.imageData[i].red) > 255){
                tempPixel.red = 255;
            }
            
            if((this-> imageData[i].red + rhs.imageData[i].red) <= 0){
                tempPixel.red = 0;
            }
        }
        
        if((this-> imageData[i].green + rhs.imageData[i].green) <= 255  && (this-> imageData[i].green + rhs.imageData[i].green) >= 0){
            tempPixel.green = this-> imageData[i].green + rhs.imageData[i].green;
        } else{
            if((this-> imageData[i].green + rhs.imageData[i].green) > 255){
                tempPixel.green = 255;
            }
            
            if((this-> imageData[i].green + rhs.imageData[i].green) <= 0){
                tempPixel.green = 0;
            }
        }
        
        if((this-> imageData[i].blue + rhs.imageData[i].blue) <= 255  && (this-> imageData[i].blue + rhs.imageData[i].blue) >= 0){
            tempPixel.blue = this-> imageData[i].blue + rhs.imageData[i].blue;
        } else{
            if((this-> imageData[i].blue + rhs.imageData[i].blue) > 255){
                tempPixel.blue = 255;
            }
            
            if((this-> imageData[i].blue + rhs.imageData[i].blue) <= 0){
                tempPixel.blue = 0;
            }
        }
        
        C.imageData.push_back(tempPixel);
    }
    
    return C;
}

Image Image::operator+(int num){
    
    Image C;
    Image::Pixel tempPixel;
    
    for(int i = 0; i < this-> imageData.size(); i++){
        
        if((this -> imageData[i].red + num) <= 255 && (this -> imageData[i].red + num) >= 0){
            
            tempPixel.red = this -> imageData[i].red + num;
            
        } else{
            if((this -> imageData[i].red + num) > 255){
                tempPixel.red = 255;
            }
            
            if((this -> imageData[i].red + num) < 0){
                tempPixel.red = 0;
            }
        }
        
        if((this -> imageData[i].green + num) <= 255 && (this -> imageData[i].green + num) >= 0){
            
            tempPixel.green = this -> imageData[i].green + num;
            
        } else{
            if((this -> imageData[i].green + num) > 255){
                tempPixel.green = 255;
            }
            
            if((this -> imageData[i].green + num) < 0){
                tempPixel.green = 0;
            }
        }
        
        if((this -> imageData[i].blue + num) <= 255 && (this -> imageData[i].blue + num) >= 0){
            
            tempPixel.blue = this -> imageData[i].blue + num;
            
        } else{
            if((this -> imageData[i].blue + num) > 255){
                tempPixel.blue = 255;
            }
            
            if((this -> imageData[i].blue + num) < 0){
                tempPixel.blue = 0;
            }
        }
        
        C.imageData.push_back(tempPixel);
        
    }
    
    return C;
}

Image Image::operator-(Image& rhs){
    
    Image C;
    Image::Pixel tempPixel;
    
    for(int i = 0; i < rhs.imageData.size(); i++){
        
        if((this-> imageData[i].red - rhs.imageData[i].red) <= 255  && (this-> imageData[i].red - rhs.imageData[i].red) >= 0){
            tempPixel.red = this-> imageData[i].red - rhs.imageData[i].red;
        } else{
            if((this-> imageData[i].red - rhs.imageData[i].red) > 255){
                tempPixel.red = 255;
            }
            
            if((this-> imageData[i].red - rhs.imageData[i].red) <= 0){
                tempPixel.red = 0;
            }
        }
        
        if((this-> imageData[i].green - rhs.imageData[i].green) <= 255  && (this-> imageData[i].green - rhs.imageData[i].green) >= 0){
            tempPixel.green = this-> imageData[i].green - rhs.imageData[i].green;
        } else{
            if((this-> imageData[i].green - rhs.imageData[i].green) > 255){
                tempPixel.green = 255;
            }
            
            if((this-> imageData[i].green - rhs.imageData[i].green) <= 0){
                tempPixel.green = 0;
            }
        }
        
        if((this-> imageData[i].blue - rhs.imageData[i].blue) <= 255  && (this-> imageData[i].blue - rhs.imageData[i].blue) >= 0){
            tempPixel.blue = this-> imageData[i].blue - rhs.imageData[i].blue;
        } else{
            if((this-> imageData[i].blue - rhs.imageData[i].blue) > 255){
                tempPixel.blue = 255;
            }
            
            if((this-> imageData[i].blue - rhs.imageData[i].blue) <= 0){
                tempPixel.blue = 0;
            }
        }
        
        C.imageData.push_back(tempPixel);
    }
    
    C.assignHeader(rhs);
    
    return C;
    
}

Image Image::operator-(int num){
    Image C;
    Image::Pixel tempPixel;
    
    for(int i = 0; i < this-> imageData.size(); i++){
        
        if((this -> imageData[i].red - num) <= 255 && (this -> imageData[i].red - num) >= 0){
            
            tempPixel.red = this -> imageData[i].red - num;
            
        } else{
            if((this -> imageData[i].red - num) > 255){
                tempPixel.red = 255;
            }
            
            if((this -> imageData[i].red - num) < 0){
                tempPixel.red = 0;
            }
        }
        
        if((this -> imageData[i].green - num) <= 255 && (this -> imageData[i].green - num) >= 0){
            
            tempPixel.green = this -> imageData[i].green - num;
            
        } else{
            if((this -> imageData[i].green - num) > 255){
                tempPixel.green = 255;
            }
            
            if((this -> imageData[i].green - num) < 0){
                tempPixel.green = 0;
            }
        }
        
        if((this -> imageData[i].blue - num) <= 255 && (this -> imageData[i].blue - num) >= 0){
            
            tempPixel.blue = this -> imageData[i].blue - num;
            
        } else{
            if((this -> imageData[i].blue - num) > 255){
                tempPixel.blue = 255;
            }
            
            if((this -> imageData[i].blue - num) < 0){
                tempPixel.blue = 0;
            }
        }
        
        C.imageData.push_back(tempPixel);
        
    }
    
    return C;
}

Image Image::operator*(Image& rhs){
    
    Image C;
    Image::Pixel solutionPixel;
    //int normalizedPixelRHS, normalizedPixelLHS;
    
    
    for(int i = 0; i < rhs.imageData.size(); i++){
    
        int redLHS = rhs.imageData[i].red;
        int greenLHS = rhs.imageData[i].green;
        int blueLHS = rhs.imageData[i].blue;
        
        int redRHS = this->imageData[i].red;
        int greenRHS = this->imageData[i].green;
        int blueRHS = this->imageData[i].blue;
        
        int resultingRed, resultingBlue, resultingGreen;
        unsigned char red, green, blue;
        
        resultingRed = redLHS * redRHS;
        resultingGreen = greenLHS * greenRHS;
        resultingBlue = blueLHS * blueRHS;
        
        float resultingRedFloat = resultingRed/255;
        float resultingGreenFloat = resultingGreen/255;
        float resultingBlueFloat = resultingBlue/255;
        
        if(resultingRedFloat > 255){
            resultingRed = 255;
            red = resultingRed;
        } else{
            resultingRedFloat = resultingRedFloat + 0.5f;
            resultingRed = (int) resultingRedFloat;
            red = resultingRed;
            solutionPixel.red = red;
        }
        if(resultingGreenFloat > 255){
            resultingGreen = 255;
            green = resultingGreen;
            solutionPixel.green = green;
        } else{
            resultingGreenFloat = resultingGreenFloat + 0.5f;
            resultingGreen = (int) resultingGreenFloat;
            green = resultingGreen;
            solutionPixel.green = green;
        }
        
        if(resultingBlueFloat > 255){
            resultingBlue = 255;
            blue = resultingBlue;
            solutionPixel.blue = blue;
        }else{
            resultingBlueFloat = resultingBlueFloat + 0.5f;
            resultingBlue = (int) resultingBlueFloat;
            blue = resultingBlue;
            solutionPixel.blue = blue;
        }
        
        C.imageData.push_back(solutionPixel);
    }
    C.assignHeader(rhs);
    return C;
}

Image Image::operator*(int num){
    
    Image C;
    Image::Pixel normalizedPixelRHS, solutionPixel;
        
        for(int i = 0; i < imageData.size(); i++){
        
            int redRHS = this->imageData[i].red;
            int greenRHS = this->imageData[i].green;
            int blueRHS = this->imageData[i].blue;
            
            int resultingRed, resultingBlue, resultingGreen;
            unsigned char red, green, blue;
            
            resultingRed = num * redRHS;
            resultingGreen = num * greenRHS;
            resultingBlue = num * blueRHS;
            
            float resultingRedFloat = resultingRed/255;
            float resultingGreenFloat = resultingGreen/255;
            float resultingBlueFloat = resultingBlue/255;
            
            if(resultingRedFloat > 255){
                resultingRed = 255;
                red = resultingRed;
            } else{
                resultingRedFloat = resultingRedFloat + 0.5f;
                resultingRed = (int) resultingRedFloat;
                red = resultingRed;
                solutionPixel.red = red;
            }
            if(resultingGreenFloat > 255){
                resultingGreen = 255;
                green = resultingGreen;
                solutionPixel.green = green;
            } else{
                resultingGreenFloat = resultingGreenFloat + 0.5f;
                resultingGreen = (int) resultingGreenFloat;
                green = resultingGreen;
                solutionPixel.green = green;
            }
            
            if(resultingBlueFloat > 255){
                resultingBlue = 255;
                blue = resultingBlue;
                solutionPixel.blue = blue;
            }else{
                resultingBlueFloat = resultingBlueFloat + 0.5f;
                resultingBlue = (int) resultingBlueFloat;
                blue = resultingBlue;
                solutionPixel.blue = blue;
            }
            
            C.imageData.push_back(solutionPixel);
    }
    
    C.header.bitsPerPixel = this -> header.bitsPerPixel;
    C.header.colorMapDepth = this -> header.colorMapDepth;
    C.header.colorMapLength = this -> header.colorMapLength;
    C.header.colorMapOrigin = this -> header.colorMapOrigin;
    C.header.colorMapType = this -> header.colorMapType;
    C.header.dataTypeCode = this -> header.dataTypeCode;
    C.header.height = this -> header.height;
    C.header.width = this -> header.width;
    
    return C;
}
Image Image::operator/(Image& rhs){
    
    Image C;
    float tempVal = 0.0;
    Image::Pixel tempPixel;
    
    for(int i = 0; i < rhs.imageData.size(); i++){
        
        if(roundValue(tempVal = (this-> imageData[i].red / rhs.imageData[i].red)) <= 255  && roundValue(tempVal = (this-> imageData[i].red / rhs.imageData[i].red)) >= 0){
            tempPixel.red = roundValue(tempVal = (this-> imageData[i].red / rhs.imageData[i].red));
        } else{
            if(roundValue(tempVal = (this-> imageData[i].red / rhs.imageData[i].red)) > 255){
                tempPixel.red = 255;
            }
            
            if(roundValue(tempVal = (this-> imageData[i].red / rhs.imageData[i].red)) <= 0){
                tempPixel.red = 0;
            }
        }
        
        if(roundValue(tempVal = (this-> imageData[i].green / rhs.imageData[i].green)) <= 255  && roundValue(tempVal = (this-> imageData[i].green / rhs.imageData[i].green)) >= 0){
            tempPixel.green = roundValue(tempVal = (this-> imageData[i].green / rhs.imageData[i].green));
        } else{
            if(roundValue(tempVal = (this-> imageData[i].green / rhs.imageData[i].green)) > 255){
                tempPixel.green = 255;
            }
            
            if(roundValue(tempVal = (this-> imageData[i].green / rhs.imageData[i].green)) <= 0){
                tempPixel.green = 0;
            }
        }
        
        if(roundValue(tempVal = (this-> imageData[i].blue / rhs.imageData[i].blue)) <= 255  && roundValue(tempVal = (this-> imageData[i].blue / rhs.imageData[i].blue)) >= 0){
            tempPixel.blue = roundValue(tempVal = (this-> imageData[i].blue / rhs.imageData[i].blue));
        } else{
            if(roundValue(tempVal = (this-> imageData[i].blue / rhs.imageData[i].blue)) > 255){
                tempPixel.blue = 255;
            }
            
            if(roundValue(tempVal = (this-> imageData[i].blue / rhs.imageData[i].blue)) <= 0){
                tempPixel.blue = 0;
            }
        }
        
        C.imageData.push_back(tempPixel);
    }
    
    return C;
}

Image Image::operator/(int num){
    Image C;
    float tempVal = 0.0;
    Image::Pixel tempPixel;
    
    for(int i = 0; i < this-> imageData.size(); i++){
        
        if(roundValue(tempVal = (this -> imageData[i].red / num)) <= 255 && roundValue(tempVal = (this -> imageData[i].red / num)) >= 0){
            
            tempPixel.red = roundValue(tempVal = (this -> imageData[i].red / num));
            
        } else{
            if(roundValue(tempVal = (this -> imageData[i].red / num)) > 255){
                tempPixel.red = 255;
            }
            
            if(roundValue(tempVal = (this -> imageData[i].red / num)) < 0){
                tempPixel.red = 0;
            }
        }
        
        if(roundValue(tempVal = (this -> imageData[i].green / num)) <= 255 && roundValue(tempVal = (this -> imageData[i].green / num)) >= 0){
            
            tempPixel.green = roundValue(tempVal = (this -> imageData[i].green / num));
            
        } else{
            if(roundValue(tempVal = (this -> imageData[i].blue / num)) > 255){
                tempPixel.blue = 255;
            }
            
            if(roundValue(tempVal = (this -> imageData[i].blue / num)) < 0){
                tempPixel.blue = 0;
            }
        }
        
        if(roundValue(tempVal = (this -> imageData[i].blue / num)) <= 255 && roundValue(tempVal = (this -> imageData[i].blue / num)) >= 0){
            
            tempPixel.blue = roundValue(tempVal = (this -> imageData[i].blue / num));
            
        } else{
            if(roundValue(tempVal = (this -> imageData[i].blue / num)) > 255){
                tempPixel.blue = 255;
            }
            
            if(roundValue(tempVal = (this -> imageData[i].blue / num)) < 0){
                tempPixel.blue = 0;
            }
        }
        
        C.imageData.push_back(tempPixel);
        
    }
    
    return C;
}

void Image::Deserialization(ifstream &file){
    
    //Defines Header varibales
    
    file.read(&header.idLength, sizeof(header.idLength));
    file.read(&header.colorMapType,sizeof(header.colorMapType));
    file.read(&header.dataTypeCode, sizeof(header.dataTypeCode));
    file.read((char*) &header.colorMapOrigin, sizeof(header.colorMapOrigin));
    file.read((char*) &header.colorMapLength, sizeof(header.colorMapLength));
    file.read(&header.colorMapDepth, sizeof(header.colorMapDepth));
    file.read((char*) &header.xOrigin, sizeof(header.xOrigin));
    file.read((char*) &header.yOrigin, sizeof(header.yOrigin));
    file.read((char*) &header.width, sizeof(header.width));
    file.read((char*) &header.height, sizeof(header.height));
    file.read(&header.bitsPerPixel, sizeof(header.bitsPerPixel));
    file.read(&header.imageDescriptor, sizeof(header.imageDescriptor));
    
    //Defines image data
    
    int size = header.width * header.height;
    
    Pixel* tempArr = new Pixel[size];
    
    for(int i = 0; i < size; i++){
        file.read((char*)&tempArr[i].blue, sizeof(tempArr[i].blue));
        file.read((char*)&tempArr[i].green, sizeof(tempArr[i].green));
        file.read((char*)&tempArr[i].red, sizeof(tempArr[i].red));
    }
    
    for(int i = 0; i < size; i++)
        imageData.push_back(tempArr[i]);
    
    file.close();
}

void Image::Serialization(ofstream &file){
    
    // Writes Header info to new .tga file
    file.write(&header.idLength, sizeof(header.idLength));
    file.write(&header.colorMapType,sizeof(header.colorMapType));
    file.write(&header.dataTypeCode, sizeof(header.dataTypeCode));
    file.write((char*) &header.colorMapOrigin, sizeof(header.colorMapOrigin));
    file.write((char*) &header.colorMapLength, sizeof(header.colorMapLength));
    file.write(&header.colorMapDepth, sizeof(header.colorMapDepth));
    file.write((char*) &header.xOrigin, sizeof(header.xOrigin));
    file.write((char*) &header.yOrigin, sizeof(header.yOrigin));
    file.write((char*) &header.width, sizeof(header.width));
    file.write((char*) &header.height, sizeof(header.height));
    file.write(&header.bitsPerPixel, sizeof(header.bitsPerPixel));
    file.write(&header.imageDescriptor, sizeof(header.imageDescriptor));
    
    //
    int size = header.width * header.height;
    
    for(int i = 0; i < size; i++){
        file.write((char*) &imageData[i].blue, sizeof(imageData[i].blue));
        file.write((char*) &imageData[i].green, sizeof(imageData[i].green));
        file.write((char*) &imageData[i].red, sizeof(imageData[i].red));
    }
    
    file.close();
    
}

void Image::assignHeader(Image& image){
    /*
    this -> header.bitsPerPixel = image.header.bitsPerPixel;
    this -> header.colorMapDepth = image.header.colorMapDepth;
    this -> header.colorMapLength = image.header.colorMapLength;
    this -> header.colorMapOrigin = image.header.colorMapOrigin;
    this -> header.colorMapType = image.header.colorMapType;
    this -> header.dataTypeCode = image.header.dataTypeCode;
     */
    this -> header.height = image.header.height;
    this -> header.width = image.header.width;
}

void Image::toString(){
    cout << "Image Desription:\n";
    header.toString();
    
    cout<< "Image Data:\n";
    for(int i = 0; i < imageData.size(); i++)
        imageData[i].toString();
}

float roundValue(float& value){
    float roundedVal = 0.0;
    
    roundedVal = value * 0.5f;
    
    return roundedVal;
}
