// DOCUMENTATION GOES HERE

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "student.h"
#include "bubble.h"

using namespace std;

typedef struct class_stats
{
  float mean;
  float min;
  float max;
  float median;
  char *name;
} classStats;

void printStudent(student *s)
{
  cout.precision(2);
  cout
      << s->first << " " << s->last << " " << fixed << s->mean << endl;
}

void printAllStudents(student *students[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printStudent(students[i]);
  }
}

student *readStudentLine(string lineInput)
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

void readStudentsFile(student *students[], int size)
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

void printStatsLine(classStats stats)
{
  cout.precision(2);

  cout << "CSCE 1040  MEAN " << fixed << stats.mean
       << " MIN: " << fixed << stats.min
       << " MAX: " << fixed << stats.max
       << " MEDIAN: " << fixed << stats.median
       << endl;
}

void calcClassStats(classStats stats, student *students[], int size)
{
  stats.max = students[0]->mean;
  stats.min = students[0]->mean;
  stats.mean = students[0]->mean;

  for (int i = 1; i < size; i++)
  {
    if (students[i]->mean > stats.max)
      stats.max = students[i]->mean;

    if (students[i]->mean < stats.min)
      stats.min = students[i]->mean;

    stats.mean += students[i]->mean;
  }

  stats.mean = stats.mean / size;

  stats.median = students[size / 2]->mean;

  printStatsLine(stats);
}

int main()
{
  classStats stats = {0, 0, 0, 0, new char()};
  const int CNT = 19;
  student *students[CNT];

  readStudentsFile(students, CNT);

  bubble(students, CNT);

  calcClassStats(stats, students, CNT);

  printAllStudents(students, CNT);

  return 0;
}
