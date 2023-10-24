
//prototype for main.c
void clearBuff(void);
int getNoOfStudents(void);
int getAverage(int NumberOfStudents);
void printReport(int NumberOfStudents, int average);
char prnGrade(int mark);
int returnCode_Check(int returnCode,char after);


//prototypes for utils.c
int getInt(void);
int getIntMM(int min, int max);
double getDouble(void);
double getDoubleMM(double min, double max);
void line(char fill, int lenght);