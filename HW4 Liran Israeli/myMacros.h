#pragma once
#ifndef MACROS_H_
#define MACROS_H_
#define CHECK_RETURN_0(ptr) {\
					 if (ptr==NULL)\
				     return 0;\
					}

#define CHECK_RETURN_NULL(ptr) {\
					 if (ptr==NULL)\
				     return NULL;\
					}

#define CHECK_MSG_RETURN_0(ptr,msg) {\
							if (ptr==NULL){\
							puts(msg);\
							return 0;}\
							}

#define CHECK_0_MSG_CLOSE_FILE(ptr,msg, fileName) {\
								if(ptr==0){\
								puts(msg);\
								fclose(fileName);\
								return 0;}\
								}

#define CHECK_NULL__MSG_CLOSE_FILE(ptr,msg, fileName) {\
								if(ptr==NULL){\
								puts(msg);\
								fclose(fileName);\
								return 0;}\
								}

#define MSG_CLOSE_RETURN_0(msg, fileName) {\
								puts(msg);\
								fclose(fileName);\
								return 0;\
								}


#endif /* MACROS_H_ */
