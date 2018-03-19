#ifndef C_UTL_MEMORY_H
#define C_UTL_MEMORY_H

template <class T, class I = int> class CUtlMemory {
public:
    T& operator[](I i)
    {
        return m_pMemory[i];
    }
protected:
    T* m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};

#endif // C_UTL_MEMORY_H
