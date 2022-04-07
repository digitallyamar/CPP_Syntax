#ifndef SILLY_H
#define SILLY_H


class Silly
{
    public:
        int num;
        Silly();
        Silly(int);
        Silly operator+(Silly);
};

#endif // SILLY_H
