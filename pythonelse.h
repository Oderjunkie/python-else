#ifndef OTESUNKI_PYTHONELSE_H
#define OTESUNKI_PYTHONELSE_H

  #ifdef PY_FOR
    #undef PY_FOR
  #endif
  
  #ifdef PY_WHL
    #undef PY_WHL
  #endif
  
  #ifdef macro
    #undef macro
  #endif

  #ifdef syntax_extension
    #undef syntax_extension
  #endif
  
  #define macro 1
  #define syntax_extension 2

  #ifndef include_as
    #define include_as macro
  #endif

  #if include_as == macro
    #ifdef __STDC__
      #ifdef __STDC_VERSION__
        #if __STDC_VERSION__ >= 199901L
          #include <setjmp.h>
          
          #define PY_WHL(...) PY_FOR(;(__VA_ARGS__);)
          #define PY_FOR(...) \
            for (int _ftv_ = 1; _ftv_; _ftv_ = 0) \
            for (jmp_buf _fbr_, _fbk_, _fct_; _ftv_; _ftv_ = 0) \
            if (setjmp(_fbk_) == 0) \
              if (setjmp(_fbr_) == 1) \
                (void) 0; \
              else \
                for(;;longjmp(_fbk_, 1)) \
                  for (__VA_ARGS__) \
                    if (setjmp(_fct_) == 1) \
                      (void) 0; \
                    else \
                      for(;;longjmp(_fbr_, 1)) \
                        for(;;longjmp(_fct_, 1))
        #endif
      #endif
    #endif
    
    #ifndef PY_FOR
      #define PY_P2(foo, bar) PY_P2_(foo, bar)
      #define PY_P2_(foo, bar) foo##bar
      #define PY_WHL(cond) PY_FOR(;(cond);)
      #define PY_FOR(X) \
        if (1) \
          goto PY_P2(_fib_, __LINE__); \
        else \
          PY_P2(_fel_, __LINE__): if (0) \
            for (;;) \
              if (1) { \
                goto PY_P2(_fel_, __LINE__); \
                PY_P2(_fbr_, __LINE__): break; \
              } else \
                PY_P2(_fib_, __LINE__): \
                  for (X) \
                    if (1) { \
                      goto PY_P2(_fbd_, __LINE__); \
                      PY_P2(_fct_, __LINE__): (void) 0; \
                    } else \
                      for (;;) \
                        if (1) { \
                          goto PY_P2(_fbr_, __LINE__); \
                        } else \
                          for (;;) \
                            if (1) { \
                              goto PY_P2(_fct_, __LINE__); \
                            } else \
                              PY_P2(_fbd_, __LINE__):
    #endif
  #else
    #ifdef for
      #undef for
    #endif
    
    #ifdef while
      #undef while
    #endif
    
    #ifdef __STDC__
      #ifdef __STDC_VERSION__
        #if __STDC_VERSION__ >= 199901L
          #include <setjmp.h>
          
          #define while(...) for(;(__VA_ARGS__);)
          #define for(...) \
            for (int _ftv_ = 1; _ftv_; _ftv_ = 0) \
            for (jmp_buf _fbr_, _fbk_, _fct_; _ftv_; _ftv_ = 0) \
            if (setjmp(_fbk_) == 0) \
              if (setjmp(_fbr_) == 1) \
                (void) 0; \
              else \
                for(;;longjmp(_fbk_, 1)) \
                  for (__VA_ARGS__) \
                    if (setjmp(_fct_) == 1) \
                      (void) 0; \
                    else \
                      for(;;longjmp(_fbr_, 1)) \
                        for(;;longjmp(_fct_, 1))
        #endif
      #endif
    #endif
    
    #ifndef for
      #define PY_P2(foo, bar) PY_P2_(foo, bar)
      #define PY_P2_(foo, bar) foo##bar
      #define while(cond) for(;(cond);)
      #define for(X) \
        if (1) \
          goto PY_P2(_fib_, __LINE__); \
        else \
          PY_P2(_fel_, __LINE__): if (0) \
            for (;;) \
              if (1) { \
                goto PY_P2(_fel_, __LINE__); \
                PY_P2(_fbr_, __LINE__): break; \
              } else \
                PY_P2(_fib_, __LINE__): \
                  for (X) \
                    if (1) { \
                      goto PY_P2(_fbd_, __LINE__); \
                      PY_P2(_fct_, __LINE__): (void) 0; \
                    } else \
                      for (;;) \
                        if (1) { \
                          goto PY_P2(_fbr_, __LINE__); \
                        } else \
                          for (;;) \
                            if (1) { \
                              goto PY_P2(_fct_, __LINE__); \
                            } else \
                              PY_P2(_fbd_, __LINE__):
    #endif
    
    #define PY_FOR for
    #define PY_WHL while
  #endif
  
  #undef include_as
  #undef syntax_extension
  #undef macro

#endif
