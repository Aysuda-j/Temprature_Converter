# include <stdio.h>
# include <windows.h>
// use incase your in windows
// for setting the degrees sign in the output

//now if we want to convert to others i just need to write toCelcius and use it to convert to the others?

float toCelcius(float temp , char unit){

    if(unit == 'c' || unit == 'C'){
        
        return temp;
    }
    
    else if(unit == 'k' || unit == 'K'){
        
        return temp - 273.15 ;
    }

    else if(unit == 'f' || unit == 'F'){
        
        return (temp - 32) * 5/9 ;
    }

    else{return -274;}
    
}

int main(){
     SetConsoleOutputCP(CP_UTF8);
    // use incase your in windows

    // wanna check temporarily type 
    // chcp 65001 
    // in your PowerShell terminal before running

    float temp;
    char unit;

    printf("Enter Your Temperature With It's Unit (C/F/K): ");
    scanf("%f %c", &temp , &unit);

    
    float celsius = toCelcius(temp, unit);

    if (celsius == -274) {
        printf("Invalid Input !!\n");
    } 
    
    else {
        printf("Result: %.2f °C\n", celsius);

        float fahrenheit = (celsius * 9/5) + 32;
        printf("Result: %.2f °F\n", fahrenheit);

        float kelvin = celsius + 273.15;
        printf("Result: %.2f °K\n", kelvin);
    }

    return 0;
}
