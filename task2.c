# include <stdio.h>
// # include <windows.h>
// use incase your in windows
// for setting the degrees sign in the output

int main(){
    // SetConsoleOutputCP(CP_UTF8);
    // use incase your in windows

    // wanna check temporarily type 
    // chcp 65001 
    // in your PowerShell terminal before running

    float temp , result;
    char unit;

    printf("Enter Your Temperature With It's Unit (C/F/K): ");
    scanf("%f %c", &temp , &unit);

    if(unit != 'c' && unit != 'C'){
        if(unit == 'k' || unit == 'K'){
            result = temp - 273.15 ;
            printf("Result: %.2f °C\n", result);

            result = (result * 9/5) + 32 ;
            printf("Result: %.2f °F\n", result);
        }

        else if(unit == 'f' || unit == 'F'){
            result = (temp - 32) * 5/9 ;
            printf("Result: %.2f °C\n", result);

            result = result + 273.15 ;
            printf("Result: %.2f °K\n", result);
        }

        else{printf("Invalid Input !!\n");}
    }

    else if(unit == 'c' || unit == 'C'){
        result = temp + 273.15 ;
        printf("Result: %.2f °K\n", result);

        result = (temp * 9/5) + 32 ;
        printf("Result: %.2f °F\n", result);

    }

    else{printf("Invalid Input !!\n");}
    

    return 0;
}
