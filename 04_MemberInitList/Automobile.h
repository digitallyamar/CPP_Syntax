#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H


class Automobile
{
    public:
        Automobile(int a, int b);
        virtual ~Automobile();
        void print();

    protected:

    private:
        int normalVar;
        const int constVar;
};

#endif // AUTOMOBILE_H
