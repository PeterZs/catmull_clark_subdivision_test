#ifndef _VERTEX_
#define _VERTEX_
#include "myvector.h"
class vertex
{
 public:
  myvector location;
  int index_HE_towards; //ָ���һ��halfedge������
  myvector vp;
  vertex(){}
  vertex(myvector location)
    {
      this->location=location;
      index_HE_towards=-1; //-1��ʾ��û���ҵ�һ�����������
    }
  ~vertex(){}
};

#endif
