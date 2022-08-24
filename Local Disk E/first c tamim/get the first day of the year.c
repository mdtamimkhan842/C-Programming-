int getfirstdayoftheyear (int year){
int days = (year*365+ ((year-1)/4)- ((year-1)/100) + ((year-1)/400))%7;
return days;
}


for ((year % 4 ==0 && year % 100! = 0) || (year % 400 = 0)){
daysinmonth [1]= 29;
}

//get the first of the year
weekend = getfirstdayoftheyear (year);
