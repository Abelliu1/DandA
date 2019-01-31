/*初始条件：顺序线性表L已经存在，1=<i<L->length
操作结束：删除L的第i个数据袁术，并且返回其值，L的长度-1*/

status ListDelete(SqList *L,int i,ElemType *e)
{
	int k;
	if(L->length==0)
		return ERROR;
	if(i<1||i>L->length)
		return ERROR;
	*e=L->data[i-1];
	if(i<L->length)
	{
		for(k=i;k<L->length;k++)
		{
			L->data[k-1]=L->data{[k];
		}
	}
	L->length--;
	return OK;
}