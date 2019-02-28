#ifndef _HALFEDGE_
#define _HALFEDGE_

#include "halfedge.h"
#include "myvector.h"

class halfedge
{
 public:

  int index_vertex_towards;
  int index_vertex_begin;
  int index_face;
  int index_nextHE;
  int index_prevHE;
  int index_oppHE;

  myvector ep;
  int get_ep; //�Ƿ��Ѿ����ep
  int index_ep;
  ~halfedge(){}

  
 halfedge(int index_vertex_towards,int index_vertex_begin,int index_face,int index_nextHE,int index_prevHE,int index_oppHE):index_vertex_towards(index_vertex_towards),index_vertex_begin(index_vertex_begin),index_face(index_face),index_nextHE(index_nextHE),index_prevHE(index_prevHE),index_oppHE(index_oppHE)
  {
    get_ep=0;
    index_ep=-1;
  } //����һ���ߵĵڶ���halfedge����Ϊ��һ��halfedge�Ѿ��õ������Է���߳�ʼ�����ɵõ�
	
	
  halfedge(){
    get_ep=0;
    index_ep=-1;
  }

 halfedge(int index_vertex_towards,int index_vertex_begin,int index_face,int index_nextHE,int index_prevHE):index_vertex_towards(index_vertex_towards),index_vertex_begin(index_vertex_begin),index_face(index_face),index_nextHE(index_nextHE),index_prevHE(index_prevHE){
    get_ep=0;
    index_ep=-1;
  } //����һ���ߵĵ�һ��halfedge���޷�Ԥ֪�ڶ���halfedge�������ʳ�ʼ��ʱ������

};
#endif
