#include <SoftwareSerial.h>
String input;

int lr;//left and right on Left Joystick
int bf;//back and front on Left Joystick
int rotate;//left and right on Right Joystick
int nothing;//not being used yet,up and down on the right joystick
int jSWleft;//button on the left joystick
int jSWright;//button on the right joystick
int btnLeft;//small button on the left
int btnRight;//small button on the right

int flipflop1;
int flipflop2;
const char delimiter = ',';
SoftwareSerial HC12(4, 5);
void setup()
{
  Serial.begin(9600);
  HC12.begin(9600);
  delay(2000);
}
void loop(){
   if(HC12.available())
   {
   input = HC12.readStringUntil('n');

   if (input.length() > 0)
       {
         Serial.println(input);
    
         flipflop1 = input.indexOf(delimiter);
         lr = input.substring(0, flipflop1).toInt();
         
         flipflop2 = input.indexOf(delimiter, flipflop1+1);
         bf = input.substring(flipflop1+1, flipflop2).toInt();
    
         flipflop1 = input.indexOf(delimiter, flipflop2+1);
         rotate = input.substring(flipflop2+1, flipflop1).toInt();
    
         flipflop2 = input.indexOf(delimiter, flipflop1+1);
         jSWright = input.substring(flipflop1+1, flipflop2).toInt();

         flipflop1 = input.indexOf(delimiter);
         btnLeft = input.substring(0, flipflop1).toInt();
         
         flipflop2 = input.indexOf(delimiter, flipflop1+1);
         btnRight = input.substring(flipflop1+1, flipflop2).toInt();
    
    
         nothing = input.substring(flipflop2+1).toInt();
    
         delay(10);  
      }
  }
}

//These might be useful to you --yAya

//indexOf()
//  Description
//  Locates a character or String within another String. By default, searches from the beginning of the String, but can also start from a given index, allowing for the locating of all instances of the character or String.
//  
//  Syntax
//  myString.indexOf(val)
//  myString.indexOf(val, from)
//  
//  Parameters
//  myString: a variable of type String.
//  val: the value to search for. Allowed data types: char, String.
//  from: the index to start the search from.
//  
//  Returns
//  The index of val within the String, or -1 if not found.




//substring()

//  Description
//  Get a substring of a String. The starting index is inclusive (the corresponding character is included in the substring), 
//  but the optional ending index is exclusive (the corresponding character is not included in the substring). 
//  If the ending index is omitted, the substring continues to the end of the String
//
//  Syntax
//  myString.substring(from)
//  myString.substring(from, to)
//  
//  Parameters
//  myString: a variable of type String.
//  from: the index to start the substring at.
//  to (optional): the index to end the substring before.
