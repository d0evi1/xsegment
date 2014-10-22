#include "result/result.h"
#include "utility/utility.h"

int main()
{
    CResult m_ICTCLAS;
    char sSource[256];
    char sResult[256];

    int iRet = m_ICTCLAS.ParagraphProcessing(sSource, sResult);
    if(iRet != 0)
    {
        printf("init segment fault.\n");
    }

    m_sScore.Format("%f",m_ICTCLAS.m_dResultPossibility[0]);

    int mResultNum=0;
    iRet = m_ICTCLAS.Processing(sSource, sResult);
    if(iRet != 0)
    {
        printf("start segment fault.\n");
    }

    char sOutput[256];
    for(int i=0;i<m_ICTCLAS.m_nResultCount;i++)
    {
        sprintf(sOutput, "Result %d(Score=%f):", i+1, m_ICTCLAS.m_dResultPossibility[i]);
        sResult+=sTemp;
        m_ICTCLAS.Output(m_ICTCLAS.m_pResult[i], sResult, true);
        m_sResult+=sResult;
        m_sResult+="\r\n";
    }


    return 0;
}



