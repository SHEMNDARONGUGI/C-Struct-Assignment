#ifndef REAL_H
#define REAL_H

struct phone
{
    char brand[50];
    int ROM;
    int RAM;
    int YEAR_OF_MANUFACTURE;
    float price;
};

void phone_specs(struct phone[]);

void output_specs(struct phone[]);

#endif