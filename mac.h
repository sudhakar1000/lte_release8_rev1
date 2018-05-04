#ifndef MAC_H_INCLUDED
#define MAC_H_INCLUDED


struct ul_sch_type{
ccch_type ul_ccch_;
int32_t b;
/*extensions*/
};
typedef struct ul_sch_type ul_sch_type;
void ccch_func(ccch_type);
#endif // MAC_H_INCLUDED
