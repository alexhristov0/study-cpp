/*
Name: Alexander Hristov
ID: 11497589
Date: 9/9/2022
File: hwk1.cpp
Summary: output mean, median, max , min, and sorted list from data file of students
*PLEASE use file redirection when running the program (send the data file into hwk1.cpp)
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "student.h"
#include "bubble.h"

using namespace std;

typedef struct class_stats //struct containing data for the output
{
  float mean;
  float min;
  float max;
  float median;
  char *name;
} classStats;

void printStudent(student *s) //prints out one student from the list of students
{
  cout.precision(2);
  cout << s->first << " " << s->last << " " << fixed << s->mean << endl;
}

void printAllStudents(student *students[], int size) //prints out all students by looping the number of students and calling printStudent
{
  for (int i = 0; i < size; i++)
  {
    printStudent(students[i]);
  }
}

student *readStudentLine(string lineInput) //reads lineInput into the student structure
{
  char *first = (char *)calloc(10, sizeof(char));
  char *last = (char *)calloc(10, sizeof(char));
  int exam1, exam2, exam3;

  sscanf(&lineInput[0], "%s %s %d %d %d", first, last, &exam1, &exam2, &exam3);

  student *s = (student *)malloc(sizeof(student));
  s->first = first;
  s->last = last;
  s->exam1 = exam1;
  s->exam2 = exam2;
  s->exam3 = exam3;
  s->mean = (exam1 + exam2 + exam3) / 3.0f;

  return s;
}

<<<<<<< HEAD:Labs/Homework/Homework1/hwk1.cpp
void readStudentsFile(student *students[], int size) //copies data file into lineInput and calls readStudentLine
=======
void readStudentsFile(student *students[])
>>>>>>> fdfa200b5c44a77f46ef7445c6391b7a36dd701d:UNT_Labs/Homework-2022/Homework1/src/hwk1.cpp
{
  string lineInput;
  int i = -1;
  while (getline(cin, lineInput))
  {
    if (i >= 0)
    {
      students[i] = readStudentLine(lineInput);
    }

    i++;
  }
}

void printStatsLine(classStats *stats) //print variables from the classStats structure
{
  cout.precision(2);

  cout << "CSCE 1040  MEAN " << fixed << stats->mean
       << " MIN: " << fixed << stats->min
       << " MAX: " << fixed << stats->max
       << " MEDIAN: " << fixed << stats->median
       << endl;
}

void calcClassStats(classStats *stats, student *students[], int size) //calculates data into min, max, mean and median
{
  stats->max = students[0]->mean;
  stats->min = students[0]->mean;
  stats->mean = students[0]->mean;

  for (int i = 1; i < size; i++)
  {
    if (students[i]->mean > stats->max)
    {
      stats->max = students[i]->mean;
    }

    if (students[i]->mean < stats->min)
    {
      stats->min = students[i]->mean;
    }

    stats->mean += students[i]->mean;
  }

  stats->mean = stats->mean / size;

  stats->median = students[size / 2]->mean;
}

int main()
{
  classStats stats = {0, 0, 0, 0, new char()}; //create classStats struct
  const int CNT = 19; //represents number of students in the data file
  student *students[CNT]; //creates array of structures for students

  readStudentsFile(students);

  bubble(students, CNT);

  calcClassStats(&stats, students, CNT);

  printStatsLine(&stats);

  printAllStudents(students, CNT);

  return 0;
}