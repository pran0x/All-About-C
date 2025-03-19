#include <stdio.h>
#include <time.h>

time_t start_time = 0; // Globar variable to store the start time //Reference Time

//Call By value Reference; declaration;
__int8 Arrival_Time_Sec  (__int8 Process_No);// calculating time from zero (0);
__int8 Completion_Time   (__int8 process_Brust_Time, __int8 Arrival_Time);// Completion Time;
__int8  Turn_Arround_Time(__int8 Completion_Time,    __int8 Arrival_Time); // Trun Arround Time;
__int8  Waiting_Time     (__int8 Turn_Arround_Time,  __int8 Brust_Time);// Waitaing Time;
__int8  Response_Time    (__int8 Arrival_Times); // Response Time;


//Main Function;
__int16 main (void){
    __int16 Process_ID,Process_No;

    printf("Enter the number of processes: ");
    scanf("%d", &Process_No);//user Input; // Total Processes;

    Process_ID = Process_No;
    __int16 proccess_Brust_Time[Process_ID][Process_No];
    __int16 Arrival_Time[Process_No];

    for (__int8 i = 0, j = 1; i < Process_No, j <= Process_No; j++,i++) // user input // Brust Time taking
    {
        printf("Process   [%d] Brust Time : ",j);
        scanf("%d", &proccess_Brust_Time[i][j]);
        Arrival_Time[i]  = Arrival_Time_Sec(j);
    }
    __int8 C_T = 0, T_A_T = 0, W_T = 0, R_T = 0; // Variables;
    //Output;
    printf("|------------|-------------|--------------|------------|---------------|-------------------|--------------|---------------|\n");
    printf("| Process ID | Process No. | Arrival Time | Brust Time | Complete Time | Turn Arround Time | Waiting Time | Response Time |\n");
    printf("|------------|-------------|--------------|------------|---------------|-------------------|--------------|---------------|\n");
    for(__int8 i = 0, j = 1; i < Process_No, j <= Process_No; j++, i++){
        C_T   = Completion_Time(proccess_Brust_Time[i][j], C_T );
        T_A_T = Turn_Arround_Time(C_T, Arrival_Time[i]);
        W_T   = Waiting_Time(T_A_T, proccess_Brust_Time[i][j]);
        R_T   = Response_Time(W_T);

    printf("|    %d       |      %d      |        %d     |     %d      |      %d        |        %d          |      %d       |       %d       |\n", (Process_ID-Process_ID + i), j, Arrival_Time[i], proccess_Brust_Time[i][j], C_T, T_A_T, W_T, R_T);
    printf("|------------|-------------|--------------|------------|---------------|-------------------|--------------|---------------|\n");   

    }
return 0;
}
// function initializing;
__int8 Arrival_Time_Sec(__int8 Process_No){ // calculating time from zero (0);
    if (start_time == 0) start_time = time(NULL); // Set the reference time
    time_t current_time = time(NULL);
    __int8 relative_time = (__int8)difftime(current_time, start_time); // Calculate time from start
    printf("Process : [%d] Arrives At..........%d sec\n", Process_No, relative_time);
    return relative_time;
}
__int8 Completion_Time(__int8 process_Brust_Time, __int8 Complete_Time){// Completion Time;
    return process_Brust_Time + Complete_Time;
}
__int8  Turn_Arround_Time(__int8 Completion_Time, __int8 Brust_Time){ // Trun Arround Time;
    return Completion_Time - Brust_Time;
}
__int8  Waiting_Time(__int8 Turn_Arround_Time, __int8 Brust_Time){ // Waitaing Time;
    return Turn_Arround_Time - Brust_Time;
}
__int8  Response_Time(__int8 Waitaing_Time){ // Response Time;
    return Waitaing_Time;    
}
