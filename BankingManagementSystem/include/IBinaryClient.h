#ifndef IBINARYCLIENT_H
#define IBINARYCLIENT_H


class IBinaryClient
{
    public:
        IBinaryClient();
        virtual ~IBinaryClient();
        virtual void Insert(char strFile[80]);
        virtual void Update(char strFile[80],char id[80]);
        virtual void Delete(char strFile[80]);
        virtual void Select(char strFile[80]);
        virtual void Find(char trFile[80]);

    protected:

    private:
};

#endif // IBINARYCLIENT_H
