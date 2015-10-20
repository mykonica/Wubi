#ifndef _Included_wubi
#define _Included_wubi

#ifdef __cplusplus
extern "C" {
#endif

struct WubiCode{
    long ord;
    const char* chinese;
    const char* code;
};

const char* getCode(long ord);
const WubiCode& randomCode();

#ifdef __cplusplus
}
#endif

#endif