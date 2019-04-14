#ifndef _SAMPLE_H_
#define _SAMPLE_H_

class CSample
{
public:
    void set(int num);  //m_numに値をセット
    int get();  //m_numの値を取得する。
private:
    int m_num;
};
#endif