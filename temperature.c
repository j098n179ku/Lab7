#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
    Code authored by me.
    this function converts a celsius value to fahrenheit when this function is called
*/
float celsius_to_fahrenheit (float temp_val) //function to turn a celsius value into a fahrenheit value. takes the temp_val float parameter
{
    float converted_val = temp_val*(9.0/5.0) +32;//the converted value is the temp_val which is in celsius and converted to fahrenheit, saved into converted_val
    return converted_val; //returns converted_val as a flaot since the function is a float
}

/*
    Code authored by me.
    this function converts a fahrenheit value to celsius when this function is called
*/
float fahrenheit_to_celsius(float temp_val) //function to turn a fahrenheit value to celsius. takes temp_val as parameter
{
    float converted_val = (temp_val-32.0)*(5.0/9.0); //converted value saves the conversion of temp_val into a celsius conversion
    return converted_val; //returns converted_val as a float
}

/*
    Code authored by me.
    this function converts a celsius value to kelvin when this function is called.
    it also checks if the kelvin value is below 0, which is not a possible kelvin value
*/
float celsius_to_kelvin(float temp_val) //initializes a function to turn a calsius value to kelvin, takes temp_val as parameter
{
    float converted_val = temp_val+273.15; //converted_val is equal to temp val in celcius and adds 273.15 to make it a kelvin value
    if (converted_val < 0) //because kelvin cant be lower than 0, if it is, then it will give an error and exit the program
    {
        printf("Kelvin cannot be below 0"); //lets user know kelvin value was below 0
        exit(0); //ends program
    }
    else//otherwise
    {
        return converted_val; //returns the converted value as a float
    }
}

/*
    Code authored by me.
    this function converts a kelvin value to celsius when this function is called
*/
float kelvin_to_celsius(float temp_val) //initializes a function to turn a kelvin value to celsius, takes temp_val as parameter
{
    float converted_val = temp_val-273.15; //takes the kelvin temp fall and subtracts 273.15 to turn it into celsius
    return converted_val; //returns converted value as a float
}

/*
    Code authored by me.
    this function converts a fahrenheit value to kelvin when this function is called
    it also checks to make sure the kelvin value is actually possible
*/
float fahrenheit_to_kelvin(float temp_val) //initializes a function to turn a calsius value to kelvin, takes temp_val as parameter which is in fahrenheit
{
    float converted_val = (temp_val-32)*(5.0/9.0); //first the converted value is saved as a conversion from fahrenheit to celsius for an easier conversion
    converted_val = converted_val+273.15; //then the celsius is converted to kelvin
    if (converted_val < 0) //because kelvin cant be lower than 0, if it is, then it will give an error and exit the program
    {
        printf("Kelvin cannot be below 0"); //lets user know kelvin value was below 0
        exit(0); //ends program
    }
    else
    {
        return converted_val; //returns the converted value as a float
    }

}
/*
    Code authored by me.
    this function converts kelvin to celcius, then converts it to fahrenheit
*/
float kelvin_to_fahrenheit(float temp_val)
{
    float converted_val = temp_val-273.15; //first it converts kelvin into celsius and saves it in converted_val
    converted_val = converted_val*(9.0/5.0) +32; //then it converts celsius to fahrenheit, saving it to converted_val
    return converted_val; //returns the fully converted value in fahrenheit
}

/*
    code authored by me
    if the converted value is celsius, then it will check the
    temperature, then based off the scale given, it will give
    as weather reccomendation
*/
int celsius_weather_advisory(float converted_val) //initializes the weather advisory function and takes the converted value as a float parameter
{
    if (converted_val < 0) //if the temperature in celsius is below 0
    {
        printf(" Temperature Category: Freezing\n"); //let the user know its freezing
        printf("Weather Advisory: Stay Indoors\n"); //tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 0 && converted_val < 10) //if temp is between 0 and 10 degrees celsius
    {
        printf(" Temperature Category: Cold\n");//lets user know its cold
        printf("Weather Advisory: Wear a Jacket\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 10 && converted_val < 25)//if temp is between 10 and 25 degrees celsius
    {
        printf(" Temperature Category: Comfortable\n");//let the user know its comfortable
        printf("Weather Advisory: You should feel comfortable\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 25 && converted_val < 35)//if temp is between 25 and 35 degrees celsius
    {
        printf(" Temperature Category: Hot\n");//lets user know its hot
        printf("Weather Advisory: Stay hydrated\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 35) //if temp is above 35 degrees celsius
    {
        printf(" Temperature Category: Extreme\n"); //lets user know its extremely hot
        printf("Weather Advisory: Stay indoors\n");//tells user the reccomended course of action based on the category
    }
    return 0; //returns to get back to main
}
/*
    code authored by me
    if the converted value is fahrenheit, then it will check the
    temperature, then based off the scale given, it will give
    as weather reccomendation
*/
int fahrenheit_weather_advisory(float converted_val) //initializes the weather advisory function and takes the converted value as a float parameter
{
    if (converted_val < 32) //if temperature is below 32 degrees fahrenheit
    {
        printf(" Temperature Category: Freezing\n"); //let the user know its freezing
        printf("Weather Advisory: Stay Indoors\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 32 && converted_val < 50) //if temp is between 32 and 50 degrees fahrenheit
    {
        printf(" Temperature Category: Cold\n");//lets user know its cold
        printf("Weather Advisory: Wear a Jacket\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 50 && converted_val < 77) //if temp is between 50 and 77 degrees fahrenheit
    {
        printf(" Temperature Category: Comfortable\n"); //let the user know its comfortable
        printf("Weather Advisory: You should feel comfortable\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 77 && converted_val < 95) //if temp is between 77 and 95 degrees fahrenheit
    {
        printf(" Temperature Category: Hot\n");//lets user know its hot
        printf("Weather Advisory: Stay hydrated\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 95) //if temp is above 95 degrees fahrenheit
    {
        printf(" Temperature Category: Extrerme\n");//lets user know its extremely hot
        printf("Weather Advisory: Stay indoors\n");//tells user the reccomended course of action based on the category
    }
    return 0;//returns to get back to main
}
/*
    code authored by me
    if the converted value is kelvin, then it will check the
    temperature, then based off the scale given, it will give
    as weather reccomendation
*/
int kelvin_weather_advisory(float converted_val) //initializes the weather advisory function and takes the converted value as a float parameter
{
    if (converted_val < 273.15) //if temp is below 273.15 degrees kelvin
    {
        printf(" Temperature Category: Freezing\n"); //let the user know its freezing
        printf("Weather Advisory: Stay Indoors\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 273.15 && converted_val < 283.15) //if temp is between 273.15 and 283.15 kelvin
    {
        printf(" Temperature Category: Cold\n");//lets user know its cold
        printf("Weather Advisory: Wear a Jacket\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 283.15 && converted_val < 298.15)//if temp is between 283.15 and 298.15 kelvin
    {
        printf(" Temperature Category: Comfortable\n"); //let the user know its comfortable
        printf("Weather Advisory: You should feel comfortable\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 298.15 && converted_val < 308.15)//if temp is between 292.15 and 308.15 kelvin
    {
        printf(" Temperature Category: Hot\n");//lets user know its hot
        printf("Weather Advisory: Stay hydrated\n");//tells user the reccomended course of action based on the category
    }
    else if (converted_val >= 308.15)//if temp is above 308.15 degrees kelvin
    {
        printf(" Temperature Category: Extreme\n");//lets user know its extremely hot
        printf("Weather Advisory: Stay indoors\n");//tells user the reccomended course of action based on the category
    }
    return 0;//returns to get back to main
}

/*
    code authored by me. had to reference this to figure out how to clear an input

    https://stackoverflow.com/questions/7898215/how-can-i-clear-an-input-buffer-in-c
    
    the main function first asks the user for a temperature, then it asks
    what temperature scale the value is in
    then it asks what conversion the user wants
    finally, the temperature conversion, temp category
    and weather reccomendation are printed out for the user
*/
int main() //main function handles checking if the inputs are valid, calls all of the functions above, and then outputs to the user the temperature and weather reccomendation
{
    float temp_val; //initializes a float value for the temperature
    int scale_selection; //initializes an integer for the scale used for the temperature
    int convert_selection;//initializes an integer for the conversion the user wants
    float converted_val; //float value to save the converted value if it was converted to another scale
    bool is_valid_temp = false; //boolean variable that will be used to check if the temperature is valid
    bool is_valid_scale_selection = false; //boolean variable that will be used to check if the scale is valid
    bool is_valid_conversion = false;//boolean variable that will be used to check if the scale conversion is valid

    while (is_valid_temp == false) //while there is no valid input in the temp_val variable, the boolean will be false
    {
        printf("Enter the temperature: ");//prompts user to enter a value
        if (scanf("%f", &temp_val) == 1) //scanf will return 1 if the input is valid and saves the valid input into temp_val
        {
            is_valid_temp = true; //sets boolean to true so thay way the program can continue and break out of the while loop
        }
        else//otherwise
        {
            printf("Invalid temperature, try again\n"); //lets the user know their input wasnt valid
            while (getchar() != '\n'); //a while loop gets rid of anything stored in the input so that way the loop can try again with a clean slate
        }
    }

    while (is_valid_scale_selection == false) //while theres no valid input in the scale selection, the boolean will be false
    {
        printf("Type 1 if value is in Fahrenheit \n"); //user prompt to let the user know their options
        printf("Type 2 if value is in celsius \n"); //user prompt to let the user know their options
        printf("Type 3 if value is in kelvin \n"); //user prompt to let the user know their options
        printf("Your choice: "); //visual indicuation of where their choice will be

        if (scanf("%d", &scale_selection) == 1 && scale_selection >= 1 && scale_selection <= 3) //if the scan is valid, and if the integer is 1, 2, or 3
        {
            if(temp_val < 0 && scale_selection == 3) //if the temp value is below 0 and the scale selection is in kelvin
            {
                printf("Kelvin cannot be below 0, try a different scale\n"); //tell user that kelvin cant be used since its below 0
                while (getchar() != '\n'); //clears out the input
            }
            else//otherwise
            {
                is_valid_scale_selection = true; //lets the program break out of the while loop
            }
        }
        else//otherwise
        {
            printf("Invalid selection, try again\n"); //tell the user the temperature is invalid
            while (getchar() != '\n'); //clears out the input
        }
    }

    while (is_valid_conversion == false) //while theres no valid input in the conversion selection, the boolean will be false
    {
        printf("Now type the number of which scale you want to convert to: \n"); //lets the user know that a conversion will take place and to selection one
        printf("Type 1 if you want fahrenheit \n"); //user prompt to let the user know their options
        printf("Type 2 if you want celsius \n"); //user prompt to let the user know their options
        printf("Type 3 if you want kelvin \n"); //user prompt to let the user know their options
        printf("Your choice: ");//visual indicuation of where their choice will be

        if (scanf("%d", &convert_selection) == 1 && convert_selection >= 1 && convert_selection <= 3) //if the input is valid, and if the input is 1, 2, or 3
        {
            is_valid_conversion = true; //lets the program break out of the loop
        }
        else//otherwise
        {
            printf("Invalid conversion, try again\n"); //tell user the input is not valid
            while (getchar() != '\n'); //clears out the input to try again
        }
    }

    if  (scale_selection == convert_selection) //if the scale and conversion are the same, no conversion takes place and the temperature value input will be used directly
    {
        if (scale_selection == 1)//if the scale was chosen to be fahrenheit
        {
            printf("%f degrees fahrenheit\n", temp_val); //prints out the temperature in fahrenheit
            fahrenheit_weather_advisory(temp_val);//calls the weather advisory function to print out the rest
        }
        else if(scale_selection == 2)//if the scale was chosen to be celsius
        {
            printf("%f degrees celsius\n", temp_val);//prints out the temperature in celsius
            celsius_weather_advisory(temp_val);//calls the weather advisory function to print out the rest
        }
        else if(scale_selection == 3)//if the scale was chosen to be kelvin
        {
            printf("%f degrees kelvin\n", temp_val);//prints out the temperature in kelvin
            kelvin_weather_advisory(temp_val);//calls the weather advisory function to print out the rest
        }
    }
    else if(scale_selection == 1 && convert_selection == 2)//if the scale was in Fahrenheit and the conversion is to be in celsius
    {
        converted_val = fahrenheit_to_celsius(temp_val); //call the fahrenheit to celsius conversion function and save it in the converted value variable
        printf("%f degrees celsius\n", converted_val); //tells the user the degrees in the corresponding unit
        celsius_weather_advisory(converted_val); //calls the weather advisory function to print out the rest of the outputs for the weather type and advisory
    }
    else if(scale_selection == 2 && convert_selection == 1) //if the scale was in celsius and the conversion is to be in Fahrenheit
    {
        converted_val = celsius_to_fahrenheit(temp_val);//calls the function to convert the value in celsius to a fahrenheit value
        printf("%f degrees fahrenheit\n", converted_val);//prints out the degrees in fahrenheit
        fahrenheit_weather_advisory(converted_val);//calls the weather advisory function to print out the rest of the outputs for the weather type and advisory
    }
    else if(scale_selection == 2 && convert_selection == 3) //if the scale was in celsius and the conversion is to be in kelvin
    {
        converted_val = celsius_to_kelvin(temp_val); //calls the function to convert the calsius value to kelvin
        printf("%f degrees kelvin\n", converted_val);//prints out the now converted value in kelvin
        kelvin_weather_advisory(converted_val);//calls the weather advisory function to print out the rest of the outputs for the weather type and advisory
    }
    else if(scale_selection == 3 && convert_selection == 2) //if the scale was in kelvin and the conversion is to be in celsius
    {
        converted_val = kelvin_to_celsius(temp_val); //converts the kelvin value into a celsius value and saves it
        printf("%f degrees celsius\n", converted_val); //prints out the converted celsius value
        celsius_weather_advisory(converted_val);//calls the weather advisory function to print out the rest of the outputs for the weather type and advisory
    }
    else if(scale_selection == 1 && convert_selection == 3) //if the scale was in Fahrenheit and the conversion is to be in kelvin
    {
        converted_val = fahrenheit_to_kelvin(temp_val);//converts the fahrenheit value to kelvin
        printf("%f degrees kelvin\n", converted_val); //prints out the converted value in kelvin
        kelvin_weather_advisory(converted_val); //calls the weather advisory function to print out the rest of the outputs for the weather type and advisory
    }
    else if(scale_selection == 3 && convert_selection == 1) //if the scale was in kelvin and the conversion is to be in Fahrenheit
    {
        converted_val = kelvin_to_fahrenheit(temp_val); //converts the kelvin value to fahrenheit through the conversion function
        printf("%f degrees fahrenheit\n", converted_val);//prints out the degrees in fahrenheit
        fahrenheit_weather_advisory(converted_val);//calls the weather advisory function to print out the rest of the outputs for the weather type and advisory
    } 


    return 0;//returns to finish the program
}
