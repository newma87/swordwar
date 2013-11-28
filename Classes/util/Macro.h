#ifndef __MACRO_H__
#define __MACRO_H__

#define SW_CLASS_CREATE_FUNC(class_name) \
    static inline class_name* create() { \
        class_name* pRet = new class_name(); \
        do {    \
            CC_BREAK_IF(!pRet || !pRet->init());  \
            pRet->autorelease();  \
            return pRet;  \
        }while(0);  \
        CC_SAFE_DELETE(pRet); \
        return NULL;    \
    }

#endif //__MACRO_H__
