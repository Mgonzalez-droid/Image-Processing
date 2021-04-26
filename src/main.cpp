#include <iostream>
#include <fstream>
//#include <vector>
#include "Image.h"


//Prototypes
void subtractBlendingMode(Image,Image,string);
void multiplyBlendingMode(Image,Image,string);
void screenBlendingMode(Image,Image,string);
void overlayBlendingMode(Image,Image,string);
void greyscaleRed(Image);
void greyscaleGreen(Image);
void greyscaleBlue(Image);
void checkres();
void partOne();
void partTwo();
void partThree();
void partFour();
void partFive();
void partSix();
void partSeven();
void partEight();
void partNine();
void partTen();
void partEleven();
void runParts();
void runTests();
bool testOne();
bool testTwo();
bool testThree();
bool testFour();
bool testFive();
bool testSix();
bool testSeven();
bool testEight();
bool testNine();
bool testTen();
bool testEleven();
bool testTwelve();
bool testThirteen();
bool compare(Image,Image);

int main(){

    runParts();
    runTests();

    //checkres();
}

void runTests(){

    int count = 0;
    bool extraCredit = false;

    if(testOne()){
        cout << "Test #1 (Part1.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #1 (Part1.tga)...... Failed!\n";
    }
    ///*
    if(testTwo()){
        cout << "Test #2 (Part2.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #2 (Part2.tga)...... Failed!\n";
    }

    if(testThree()){
        cout << "Test #3 (Part3.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #3 (Part3.tga)...... Failed!\n";
    }

    if(testFour()){
        cout << "Test #4 (Part4.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #4 (Part4.tga)...... Failed!\n";
    }

    if(testFive()){
        cout << "Test #5 (Part5.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #5 (Part5.tga)...... Failed!\n";
    }

    if(testSix()){
        cout << "Test #6 (Part6.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #6 (Part6.tga)...... Failed!\n";
    }

    if(testSeven()){
        cout << "Test #7 (Part7.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #7 (Part7.tga)...... Failed!\n";
    }

    if(testEight()){
        cout << "Test #8 (Part8_b.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #8 (Part8_b.tga)...... Failed!\n";
    }

    if(testNine()){
        cout << "Test #9 (Part8_g.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #9 (Part8_g.tga)...... Failed!\n";
    }

    if(testTen()){
        cout << "Test #10 (Part8_r.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #10 (Part8_r.tga)...... Failed!\n";
    }

    if(testEleven()){
        cout << "Test #11 (Part9.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #11 (Part9.tga)...... Failed!\n";
    }

    if(testTwelve()){
        cout << "Test #12 (part10.tga)...... Passed!\n";
        count++;
    }else{
        cout << "Test #12 (part10.tga)...... Failed!\n";
    }
    
    if(testThirteen()){
        cout << "Test #13 (extracredit.tga)...... Passed!\n";
        extraCredit = true;
    }else{
        cout << "Test #13 (extracredit.tga)...... Failed!\n";
        extraCredit = false;
    }
    cout << "Test results: " << count << " / 12"<<endl;
    
    if(extraCredit == true){
        cout << "Extra credit: 1/1" <<endl;
    } else{
        cout << "Extra credit: 0/1" <<endl;
    }

}

bool testOne(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part1.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part1.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part1.tga", ios_base::binary);
    ifstream myFile("output/part1.tga", ios_base::binary);
    myImage.Deserialization(myFile);

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testTwo(){
  bool passFail = false;

  Image correctImage;
  //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part2.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part2.tga", ios_base::binary);
  correctImage.Deserialization(correctFile);

  //correctImage.header.toString();

  Image myImage;
  //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part2.tga", ios_base::binary);
    ifstream myFile("output/part2.tga", ios_base::binary);
  myImage.Deserialization(myFile);

  passFail = compare(correctImage, myImage);

  return passFail;
}

bool testThree(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part3.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part3.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part3.tga", ios_base::binary);
    ifstream myFile("output/part3.tga", ios_base::binary);
    myImage.Deserialization(myFile);

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testFour(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part4.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part4.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part4.tga", ios_base::binary);
    ifstream myFile("output/part4.tga", ios_base::binary);
    myImage.Deserialization(myFile);

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testFive(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part5.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part5.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);
    correctFile.close();

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part5.tga", ios_base::binary);
    ifstream myFile("output/part5.tga", ios_base::binary);
    myImage.Deserialization(myFile);
    myFile.close();

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testSix(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part6.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part6.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part6.tga", ios_base::binary);
    ifstream myFile("output/part6.tga", ios_base::binary);
    myImage.Deserialization(myFile);

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testSeven(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part7.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part7.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part7.tga", ios_base::binary);
    ifstream myFile("output/part7.tga", ios_base::binary);
    myImage.Deserialization(myFile);

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testEight(){
   bool passFail = false;

   Image correctImage;
   //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part8_r.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part8_r.tga", ios_base::binary);
   correctImage.Deserialization(correctFile);

   //correctImage.header.toString();

   Image myImage;
   //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part8_r.tga", ios_base::binary);
    ifstream myFile("output/part8_r.tga", ios_base::binary);
   myImage.Deserialization(myFile);

   passFail = compare(correctImage, myImage);

   return passFail;
}

bool testNine(){
   bool passFail = false;

   Image correctImage;
   //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part8_g.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part8_g.tga", ios_base::binary);
   correctImage.Deserialization(correctFile);

   //correctImage.header.toString();

   Image myImage;
   //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part8_g.tga", ios_base::binary);
    ifstream myFile("output/part8_g.tga", ios_base::binary);
   myImage.Deserialization(myFile);

   passFail = compare(correctImage, myImage);

   return passFail;
}

bool testTen(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part8_b.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part8_b.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part8_b.tga", ios_base::binary);
    ifstream myFile("output/part8_b.tga", ios_base::binary);
    myImage.Deserialization(myFile);

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testEleven(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part9.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part9.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part9.tga", ios_base::binary);
    ifstream myFile("output/part9.tga", ios_base::binary);
    myImage.Deserialization(myFile);

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testTwelve(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part10.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_part10.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);

    //correctImage.header.toString();

    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part10.tga", ios_base::binary);
    ifstream myFile("output/part10.tga", ios_base::binary);
    myImage.Deserialization(myFile);

    passFail = compare(correctImage, myImage);

    return passFail;
}

bool testThirteen(){
    bool passFail = false;

    Image correctImage;
    //ifstream correctFile("/Users/michelsdocuments/Desktop/ImageProcessing/examples/EXAMPLE_part10.tga", ios_base::binary);
    ifstream correctFile("examples/EXAMPLE_extracredit.tga", ios_base::binary);
    correctImage.Deserialization(correctFile);
    
    //correctImage.header.toString();
    
    Image myImage;
    //ifstream myFile("/Users/michelsdocuments/Desktop/ImageProcessing/output/part10.tga", ios_base::binary);
    ifstream myFile("output/extracredit.tga", ios_base::binary);
    myImage.Deserialization(myFile);
    
    passFail = compare(correctImage,myImage);

    return passFail;
}

bool compare(Image correctImage, Image myImage){
    //bool result = true;

    //Test header
    ///*
    if(correctImage.header.bitsPerPixel != myImage.header.bitsPerPixel)
        return false;

    if(correctImage.header.colorMapDepth != myImage.header.colorMapDepth)
        return false;

    if(correctImage.header.colorMapLength != myImage.header.colorMapLength)
        return false;

    if(correctImage.header.colorMapOrigin != myImage.header.colorMapOrigin)
        return false;

    if(correctImage.header.colorMapType != myImage.header.colorMapType)
        return false;

    if(correctImage.header.dataTypeCode != myImage.header.dataTypeCode)
        return false;

    if(correctImage.header.height != myImage.header.height)
        return false;

    if(correctImage.header.idLength != myImage.header.idLength)
        return false;

    if(correctImage.header.imageDescriptor != myImage.header.imageDescriptor)
        return false;

    if(correctImage.header.width != myImage.header.width)
        return false;

    if(correctImage.header.xOrigin != myImage.header.xOrigin)
        return false;

    if(correctImage.header.yOrigin != myImage.header.yOrigin)
        return false;

    //Test pixels
    //bool pixelResult = true;
    //*/
    for(int i = 0; i < (int) myImage.imageData.size(); i++){
        if(
           myImage.imageData[i].red == correctImage.imageData[i].red
           || myImage.imageData[i].blue == correctImage.imageData[i].blue
           || myImage.imageData[i].green == correctImage.imageData[i].green
           ){} else{return false;}
    }
    return true;
}

void runParts(){
    partOne();
    partTwo();
    partThree();
    partFour();
    partFive();
    partSix();
    partSeven();
    partEight();
    partNine();
    partTen();
    partEleven();
}

//DONE
void partOne(){

    Image topLayer;
    //ifstream fileOne("/Users/michelsdocuments/Desktop/ImageProcessing/input/layer1.tga", ios_base::binary);
    ifstream fileOne("input/layer1.tga", ios_base::binary);
    topLayer.Deserialization(fileOne);
    fileOne.close();

    Image bottomLayer;
    //ifstream fileTwo("/Users/michelsdocuments/Desktop/ImageProcessing/input/pattern1.tga", ios_base::binary);
    ifstream fileTwo("input/pattern1.tga", ios_base::binary);
    bottomLayer.Deserialization(fileTwo);
    fileTwo.close();

    multiplyBlendingMode(topLayer,bottomLayer,"part1");
}
//DONE
void partTwo(){
    Image topLayer;
    //ifstream fileOne("/Users/michelsdocuments/Desktop/ImageProcessing/input/layer2.tga", ios_base::binary);
    ifstream fileOne("input/layer2.tga", ios_base::binary);
    topLayer.Deserialization(fileOne);
    fileOne.close();

    Image bottomLayer;
    //ifstream fileTwo("/Users/michelsdocuments/Desktop/ImageProcessing/input/car.tga", ios_base::binary);
    ifstream fileTwo("input/car.tga", ios_base::binary);
    bottomLayer.Deserialization(fileTwo);
    fileTwo.close();

    subtractBlendingMode(topLayer,bottomLayer,"part2");
}
//DONE
void partThree(){
    Image tempTopLayer;
    //ifstream fileOne("/Users/michelsdocuments/Desktop/ImageProcessing/input/layer1.tga", ios_base::binary);
    ifstream fileOne("input/layer1.tga", ios_base::binary);
    tempTopLayer.Deserialization(fileOne);
    fileOne.close();

    Image tempBottomLayer;
    //ifstream fileTwo("/Users/michelsdocuments/Desktop/ImageProcessing/input/pattern2.tga", ios_base::binary);
    ifstream fileTwo("input/pattern2.tga", ios_base::binary);
    tempBottomLayer.Deserialization(fileTwo);
    fileTwo.close();

    Image bottomLayer;

    bottomLayer = tempBottomLayer * tempTopLayer;


    Image topLayer;
    //ifstream fileThree("/Users/michelsdocuments/Desktop/ImageProcessing/input/text.tga", ios_base::binary);
    ifstream fileThree("input/text.tga", ios_base::binary);
    topLayer.Deserialization(fileThree);
    fileOne.close();

    screenBlendingMode(topLayer, bottomLayer,"part3");
}
//DONE
void partFour(){
    Image tempTopLayer;
    ifstream fileOne("input/layer2.tga", ios_base::binary);
    tempTopLayer.Deserialization(fileOne);
    fileOne.close();

    Image tempBottomLayer;
    ifstream fileTwo("input/circles.tga", ios_base::binary);
    tempBottomLayer.Deserialization(fileTwo);
    fileTwo.close();

    Image tempImage;

    tempImage = tempTopLayer * tempBottomLayer;

    Image topLayer;
    ifstream fileThree("input/pattern2.tga", ios_base::binary);
    topLayer.Deserialization(fileThree);
    fileOne.close();

    Image composition;

    subtractBlendingMode(topLayer, tempImage,"part4");

}


//WORK IN PROGRESS
void partFive(){
    Image topLayer;
    ifstream fileOne("input/layer1.tga", ios_base::binary);
    topLayer.Deserialization(fileOne);
    fileOne.close();

    Image bottomLayer;
    ifstream fileTwo("input/pattern1.tga", ios_base::binary);
    bottomLayer.Deserialization(fileTwo);
    fileTwo.close();

    overlayBlendingMode(topLayer, bottomLayer, "part5");
}






//DONE
void partSix(){
    Image image;
    ifstream fileOne("input/car.tga", ios_base::binary);
    image.Deserialization(fileOne);
    fileOne.close();

    int originalGreen, finalGreen;
    for(int i = 0; i < (int) image.imageData.size(); i++){

        originalGreen = image.imageData[i].green;

        if(originalGreen + 200 > 255){
            finalGreen = 255;
        } else{
            finalGreen = originalGreen + 200;
        }

        image.imageData[i].green = (char) finalGreen;
    }

    ofstream fileTwo("output/part6.tga", ios_base::binary);
    image.Serialization(fileTwo);
    fileTwo.close();
}
//DONE
void partSeven(){

    Image image;
    ifstream fileOne("/Users/michelsdocuments/Desktop/ImageProcessing/input/car.tga", ios_base::binary);
    image.Deserialization(fileOne);
    fileOne.close();

    for(int i = 0; i < (int) image.imageData.size(); i++){

        float originalRed = image.imageData[i].red;
        float normalizedRed = originalRed / 255.0f;
        float temp = normalizedRed * 4.0f;
        temp = temp * 255.0f;

        int newRed = temp + 0.5f;

        if(newRed > 255){
            image.imageData[i].red = 255;
            image.imageData[i].blue = 0;
        } else{
            image.imageData[i].red = newRed;
            image.imageData[i].blue = 0;
        }
    }

    ofstream fileTwo("output/part7.tga", ios_base::binary);
    image.Serialization(fileTwo);
    fileTwo.close();
}
//DONE
void partEight(){

    Image image, redImage, greenImage, blueImage;
    Image::Pixel tempPixel;
    ifstream originalFile("input/car.tga", ios_base::binary);
    image.Deserialization(originalFile);
    originalFile.close();

    greyscaleRed(image);
    greyscaleGreen(image);
    greyscaleBlue(image);
}

void greyscaleRed(Image image){
    Image redImage;
    Image::Pixel tempPixel;

    for(int i = 0; i < (int) image.imageData.size(); i++){

        tempPixel.red = image.imageData[i].red;
        tempPixel.green = image.imageData[i].red;
        tempPixel.blue = image.imageData[i].red;
        redImage.imageData.push_back(tempPixel);
    }

    redImage.assignHeader(image);
    ofstream redSave("output/part8_r.tga", ios_base::binary);
    redImage.Serialization(redSave);
    redSave.close();
}

void greyscaleGreen(Image image){
    Image greenImage;
    Image::Pixel tempPixel;

    for(int i = 0; i < (int) image.imageData.size(); i++){

        tempPixel.red = image.imageData[i].green;
        tempPixel.green = image.imageData[i].green;
        tempPixel.blue = image.imageData[i].green;
        greenImage.imageData.push_back(tempPixel);
    }

    greenImage.assignHeader(image);
    ofstream greenSave("output/part8_g.tga", ios_base::binary);
    greenImage.Serialization(greenSave);
    greenSave.close();

}

void greyscaleBlue(Image image){

    Image blueImage;
    Image::Pixel tempPixel;

    for(int i = 0; i < (int) image.imageData.size(); i++){

        tempPixel.red = image.imageData[i].blue;
        tempPixel.green = image.imageData[i].blue;
        tempPixel.blue = image.imageData[i].blue;
        blueImage.imageData.push_back(tempPixel);
    }

    blueImage.assignHeader(image);
    ofstream blueSave("output/part8_b.tga", ios_base::binary);
    blueImage.Serialization(blueSave);
    blueSave.close();
}

//DONE
void partNine(){

    Image::Pixel tempPixel;

    Image redImage;
    ifstream fileOne("input/layer_red.tga", ios_base::binary);
    redImage.Deserialization(fileOne);
    fileOne.close();

    Image greenImage;
    ifstream fileTwo("input/layer_green.tga", ios_base::binary);
    greenImage.Deserialization(fileTwo);
    fileTwo.close();

    Image blueImage;
    ifstream fileThree("input/layer_blue.tga", ios_base::binary);
    blueImage.Deserialization(fileThree);
    fileThree.close();

    Image composition;

    for(int i = 0; i < (int) redImage.imageData.size(); i++){

        tempPixel.red = redImage.imageData[i].red;
        tempPixel.green = greenImage.imageData[i].green;
        tempPixel.blue = blueImage.imageData[i].blue;

        composition.imageData.push_back(tempPixel);
    }

    composition.assignHeader(redImage);
    ofstream fileFour("output/part9.tga", ios_base::binary);
    composition.Serialization(fileFour);
    fileFour.close();
}

//DONE!!!
void partTen(){

    Image originalImage;

    ifstream fileIn("input/text2.tga", ios_base::binary);
    originalImage.Deserialization(fileIn);
    fileIn.close();

    Image flippedImage;
    Image::Pixel tempPixel;

    for(int i = (int) originalImage.imageData.size() - 1; i >= 0; i--){

        tempPixel.red = originalImage.imageData[i].red;
        tempPixel.green = originalImage.imageData[i].green;
        tempPixel.blue = originalImage.imageData[i].blue;

        flippedImage.imageData.push_back(tempPixel);

    }

    flippedImage.assignHeader(originalImage);
    ofstream fileOut("output/part10.tga", ios_base::binary);
    flippedImage.Serialization(fileOut);
    fileOut.close();
}

void partEleven(){
    
    Image carImage;
    ifstream carFile("input/car.tga", ios_base::binary);
    carImage.Deserialization(carFile);
    carFile.close();
    
    Image circleImage;
    ifstream circleFile("input/circles.tga", ios_base::binary);
    circleImage.Deserialization(circleFile);
    circleFile.close();
    
    Image textImage;
    ifstream textFile("input/text.tga", ios_base::binary);
    textImage.Deserialization(textFile);
    textFile.close();
    
    Image patternImage;
    ifstream patternFile("input/pattern1.tga", ios_base::binary);
    patternImage.Deserialization(patternFile);
    patternFile.close();
    
    Image composition;
    composition.header.height = circleImage.header.height * 2;
    composition.header.width = circleImage.header.width * 2;
    
    Image::Pixel tempPixel;
    
    //int partOne = composition.header.width * circleImage.header.width;
    
    bool switchImage = false;
    
    
    //bottomPart
    for(int i = 0; i < 524288; i++){
        if(i-1 % 512 != 0){
            tempPixel.red = textImage.imageData[i].red;
            tempPixel.green = textImage.imageData[i].green;
            tempPixel.blue = textImage.imageData[i].blue;
            composition.imageData.push_back(tempPixel);
        } else{
            tempPixel.red = patternImage.imageData[i].red;
            tempPixel.green = patternImage.imageData[i].green;
            tempPixel.blue = patternImage.imageData[i].blue;
            composition.imageData.push_back(tempPixel);
        }
    }
    
    
    //topPart
     for(int i = 0; i < 524288; i++){
         
         if(i-1 % 512 != 0 && i != 0){
             tempPixel.red = carImage.imageData[i].red;
             tempPixel.green = carImage.imageData[i].green;
             tempPixel.blue = carImage.imageData[i].blue;
             composition.imageData.push_back(tempPixel);
         } else{
             
             tempPixel.red = circleImage.imageData[i].red;
             tempPixel.green = circleImage.imageData[i].green;
             tempPixel.blue = circleImage.imageData[i].blue;
             composition.imageData.push_back(tempPixel);
         }
     }
    

    ofstream compositionResult("output/extracredit.tga", ios_base::binary);
    composition.Serialization(compositionResult);
    compositionResult.close();
}

void subtractBlendingMode(Image topLayer, Image bottomLayer, string title){

    Image composition;

    composition = bottomLayer - topLayer;
    
    ofstream result("output/"+ title +".tga", ios_base::binary);
    composition.Serialization(result);
    result.close();
}

void multiplyBlendingMode(Image topLayer, Image bottomLayer, string title){

    Image composition;

    composition = topLayer * bottomLayer;

    ofstream result("output/"+ title +".tga", ios_base::binary);
    composition.Serialization(result);
    result.close();
}

void screenBlendingMode(Image topLayer, Image bottomLayer, string title){

    //bool overlay = decision;

    Image composition;
    Image::Pixel tempPixel;

    //C = 1 - (1 - A) * (1 - B), 1 = 255?

    for(int i = 0; i < (int) topLayer.imageData.size(); i++){

        int topRed = topLayer.imageData[i].red ;
        int topGreen = topLayer.imageData[i].green;
        int topBlue = topLayer.imageData[i].blue;

        float topFloatRed = topRed/255.0f;
        float topFloatGreen = topGreen/255.0f;
        float topFloatBlue = topBlue/255.0f;

        int bottomRed = bottomLayer.imageData[i].red ;
        int bottomGreen = bottomLayer.imageData[i].green;
        int bottomBlue = bottomLayer.imageData[i].blue;

        float bottomFloatRed = bottomRed/255.0f;
        float bottomFloatGreen = bottomGreen/255.0f;
        float bottomFloatBlue = bottomBlue/255.0f;

        float leftRedside, rightRedside, redPartOne, redPartTwo, roundedRed;
        float leftGreenside, rightGreenside, greenPartOne, greenPartTwo, roundedGreen;
        float leftBlueside, rightBlueside, bluePartOne, bluePartTwo, roundedBlue;

        //RED
        leftRedside = (1.0f - bottomFloatRed);
        rightRedside = (1.0f - topFloatRed);

        redPartOne = leftRedside * rightRedside;
        redPartTwo = (1.0f - redPartOne) * 255.0f;
        roundedRed = redPartTwo + 0.5f;


        //GREEN
        leftGreenside = (1.0f - bottomFloatGreen);
        rightGreenside = (1.0f - topFloatGreen);

        greenPartOne = leftGreenside * rightGreenside; //0.894118
        greenPartTwo = (1.0f - greenPartOne) * 255.0f; //26.999998
        roundedGreen = greenPartTwo + 0.5f; //27

        //BLUE
        leftBlueside = (1.0f - bottomFloatBlue);
        rightBlueside = (1.0f - topFloatBlue);

        bluePartOne = leftBlueside * rightBlueside;
        bluePartTwo = (1.0f - bluePartOne) * 255.0f;
        roundedBlue = bluePartTwo + 0.5f;

        if(roundedRed > 255 || roundedRed < 0){
            if(roundedRed > 255)
                tempPixel.red = 255;
            if(roundedRed < 0)
                tempPixel.red = 0;
        } else{
            tempPixel.red = roundedRed;
        }

        if(roundedGreen > 255 || roundedGreen < 0){
            if(roundedGreen > 255)
                tempPixel.green = 255;
            if(roundedGreen < 0)
                tempPixel.green = 0;
        } else{
            tempPixel.green = roundedGreen;
        }

        if(roundedBlue > 255 || roundedBlue < 0){
            if(roundedBlue > 255)
                tempPixel.blue = 255;
            if(roundedBlue < 0)
                tempPixel.blue = 0;
        } else{
            tempPixel.blue = roundedBlue;
        }

        composition.imageData.push_back(tempPixel);
    }

    composition.assignHeader(topLayer);
    ofstream result("output/"+ title +".tga", ios_base::binary);
    composition.Serialization(result);
    result.close();

}

void overlayBlendingMode(Image topLayer, Image bottomLayer, string title){

    Image composition;
    Image::Pixel tempPixel;

    for(int i = 0; i < (int) bottomLayer.imageData.size(); i++){

      //back
      int bRedPix = bottomLayer.imageData[i].red;
      int bGreenPix = bottomLayer.imageData[i].green;
      int bBluePix = bottomLayer.imageData[i].blue;

      float bNormRedPix = (float) bRedPix / 250.0f;
      float bNormGreenPix = (float) bGreenPix / 250.0f;
      float bNormBluePix = (float) bBluePix / 250.0f;

      //front
      int tRedPix = topLayer.imageData[i].red;
      int tGreenPix = topLayer.imageData[i].green;
      int tBluePix = topLayer.imageData[i].blue;

      float tNormRedPix = (float) tRedPix / 250.0f;
      float tNormGreenPix = (float) tGreenPix / 250.0f;
      float tNormBluePix = (float) tBluePix / 250.0f;

      //RED
      if((int) bRedPix <= 255/2){
        float partOne = (tNormRedPix * bNormRedPix);
        float partTwo = 2.0f * partOne;

        float deNormRed = partTwo * 255.0f;
        float roundRed = deNormRed + 0.5f;

        if(roundRed >= 255){
          tempPixel.red = 255;
        } else{
            if(roundRed > 0){
                int compRed = roundRed;
                tempPixel.red = compRed;
            } else{
                tempPixel.red = 0;
            }
        }
      } else{
        float calcLeft = (1.0f - tNormRedPix);
        float calcRight = (1.0f - bNormRedPix);
        float partOne =  calcLeft * calcRight;
        float partTwo = 1.0f -(2.0f * (partOne));

        float deNormRed = partTwo * 255.0f;
        float roundRed = deNormRed + 0.5f;

        if(roundRed >= 255){
          tempPixel.red = 255;
        } else{
            if(roundRed > 0){
                int compRed = roundRed;
                tempPixel.red = compRed;
            } else{
                tempPixel.red = 0;
            }
        }
      }

      //GREEN
      if((int) bGreenPix <= 255/2){
        float partOne = (tNormGreenPix * bNormGreenPix);
        float partTwo = 2.0f * partOne;
        
        float deNormGreen = partTwo * 255.0f;
        float roundGreen = deNormGreen + 0.5f;

        if(roundGreen >= 255){
          tempPixel.green = 255;
        } else{
            if(roundGreen > 0){
                int compGreen = roundGreen;
                tempPixel.green = compGreen;
            } else{
                tempPixel.green = 0;
            }
        }
      } else{
        float calcLeft = (1.0f - tNormGreenPix);
        float calcRight = (1.0f - bNormGreenPix);
        float partOne =  calcLeft * calcRight;
        float partTwo = 1.0f -(2.0f * (partOne));

        float deNormGreen = partTwo * 255.0f;
        float roundGreen = deNormGreen + 0.5f;

        if(roundGreen >= 255){
          tempPixel.green = 255;
        } else{
            
            if(roundGreen > 0){
                int compGreen = roundGreen;
                tempPixel.green = compGreen;
            } else{
                tempPixel.green = 0;
            }
        }
      }

      //BLUE
      if((int) bBluePix <= 255/2){
        float partOne = (tNormBluePix * bNormBluePix);
        float partTwo = 2.0f * partOne;

        float deNormBlue = partTwo * 255.0f;
        float roundBlue = deNormBlue + 0.5f;

        if(roundBlue >= 255){
          tempPixel.blue = 255;
        } else{
            if(roundBlue > 0){
                int compBlue = roundBlue;
                tempPixel.blue = compBlue;
            } else{
                tempPixel.blue = 0;
            }
        }
      } else{
        float calcLeft = (1.0f - tNormBluePix);
        float calcRight = (1.0f - bNormBluePix);
        float partOne =  calcLeft * calcRight;
        float partTwo = 1.0f -(2.0f * (partOne));

        float deNormBlue = partTwo * 255.0f;
        float roundBlue = deNormBlue + 0.5f;

        if(roundBlue >= 255){
          tempPixel.blue = 255;
        } else{
          if(roundBlue > 0){
              int compBlue = roundBlue;
              tempPixel.blue = compBlue;
          } else{
              tempPixel.blue = 0;
          }
        }
      }

      composition.imageData.push_back(tempPixel);
    }

    composition.assignHeader(bottomLayer);

    ofstream file("output/" +title+ ".tga", ios_base::binary);
    //ofstream file("output/" +title+ ".tga", ios_base::binary);
    composition.Serialization(file);
    file.close();
}
