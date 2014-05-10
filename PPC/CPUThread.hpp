#include <iostream>
using namespace std;
class PPCThread;
enum CPUThreadType : unsigned char;


class PPCThreadManager
{
	vector<PPCThread*> m_threads;
	mutex m_mtx_thread;
	wxSemaphore m_sem_task;
	u32 m_raw_spu_num;


public:
	PPCThreadManager();
	~PPCThreadManager();


	void _Close();


	PPCThread& AddThread(CPUThreadType type);
	void RemoveThread(const u32 id);


	vector<PPCThread*>& GetThreads() { return m_threads; }
	s32 GetThreadNumById(CPUThreadType type, u32 id);
	PPCThread* GetThread(u32 id);


	void _Execute();
	void _Task();
};
