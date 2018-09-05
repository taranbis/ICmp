#pragma once
class ICmp{
public:
    virtual ~ICmp()=default;
protected:
    ICmp(const ICmp &source)=default;
private:
    ICmp &operator= (const ICmp &source)const;
public:
    bool operator() (float a, float b)const;
private:
    virtual bool Do_Compare(float a, float b)const=0;
public:
    ICmp()=default;
    ICmp *Clone()const;
private:
    virtual ICmp * Do_Clone()const=0;
};
