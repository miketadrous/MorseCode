
int led1 = D7;
String NameToBlink="Zaki";

void setup()
{
   pinMode(led1, OUTPUT);
   digitalWrite(led1, LOW);
}


void loop()
{
    MorseCode(NameToBlink);
}


void MorseCode(String NameToBlink) 
{
    for (int i=0; i<NameToBlink.length();i++)
    {
        letterToLight(NameToBlink[i]);
    }
}

void LongBlink()
{
    digitalWrite(led1,HIGH);
    delay(2000);
    digitalWrite(led1,LOW);
    delay(1000);
}

void ShortBlink()
{
    digitalWrite(led1,HIGH);
    delay(500);
    digitalWrite(led1,LOW);
    delay(1000);
}

void letterToLight(char letter)
{
    switch (letter)
    {
        case 'a':
            ShortBlink();
            LongBlink();
            break;

        case 'b':
            LongBlink();
            ShortBlink();
            ShortBlink();
            ShortBlink();            
            break;

        case 'c':
            LongBlink();
            ShortBlink();
            LongBlink();
            ShortBlink();
            break;

        case 'd':
            LongBlink();
            ShortBlink();
            ShortBlink();
            break;
            
        case 'e':
            ShortBlink();
            break; 

        case 'f':
            ShortBlink();
            ShortBlink();
            LongBlink();
            ShortBlink();
            break; 

        case 'g':
            LongBlink();
            LongBlink();
            ShortBlink();
            break;                 

        case 'h':
            ShortBlink();
            ShortBlink();
            ShortBlink();
            ShortBlink();
            break; 

        case 'i':
            ShortBlink();
            ShortBlink();
            break; 

        case 'j':
            ShortBlink();
            LongBlink();
            LongBlink();
            LongBlink();
            break; 

        case 'k':
            LongBlink();
            ShortBlink();
            LongBlink();
            break; 

        case 'l':
            ShortBlink();
            LongBlink();
            ShortBlink();
            ShortBlink();
            break;

        case 'm':
            LongBlink();
            LongBlink();
            break;

        case 'n':
            LongBlink();
            ShortBlink();
            break;

        case 'o':
            LongBlink();
            LongBlink();
            LongBlink();
            break;  

        case 'p':
            ShortBlink();
            LongBlink();
            LongBlink();
            ShortBlink();
            break;      

        case 'q':
            LongBlink();
            LongBlink();
            ShortBlink();
            LongBlink();
            break;      

        case 'r':
            ShortBlink();
            LongBlink();
            ShortBlink();
            break;      

        case 's':
            ShortBlink();
            ShortBlink();
            ShortBlink();
            break;

        case 't':
            LongBlink();
            break;  

        case 'u':
            ShortBlink();
            ShortBlink();
            LongBlink();
            break;  

        case 'v':
            ShortBlink();
            ShortBlink();
            ShortBlink();
            LongBlink();
            break;  

        case 'w':
            ShortBlink();
            LongBlink();
            LongBlink();
            break;  
            
        case 'x':
            LongBlink();
            ShortBlink();
            ShortBlink();
            LongBlink();
            break; 

        case 'y':
            LongBlink();
            ShortBlink();
            LongBlink();
            LongBlink();
            break; 

        case 'z':
            LongBlink();
            LongBlink();
            ShortBlink();
            ShortBlink();
            break; 

        default:
            break;
    }
}