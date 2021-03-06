#ifndef __REGREADER_H__
#define __REGREADER_H__

#include <string>

//---------------------------------------------------------------
//function: 
//     GetRegValue 获取注册表中指定键的值
//Access:
//      public 
//Parameter:
//     [in] int nKeyType - 注册表项的类型，传入的参数只可能是以下数值：
//               0:HKEY_CLASSES_ROOT
//               1:HKEY_CURRENT_USER
//               2:HKEY_LOCAL_MACHINE
//               3:HKEY_USERS
//               4:HKEY_PERFORMANCE_DATA
//               5:HKEY_CURRENT_CONFIG
//               6:HKEY_DYN_DATA
//               7:HKEY_CURRENT_USER_LOCAL_SETTINGS
//               8:HKEY_PERFORMANCE_TEXT
//               9:HKEY_PERFORMANCE_NLSTEXT
//     [in] const std::string & strUrl - 要查找 的键的路径
//     [in] const std::string & strKey - 指定的键
//Returns:
//     std::string - 指定键的值
//Remarks:
//     ...
//---------------------------------------------------------------
namespace RegReader
{
    std::string GetRegValue(int nKeyType, const std::string& strUrl, const std::string& strKey, bool bWow64_32KEY = true);
}


// 可移植版本 wstring => string
std::string ws2s(const std::wstring& ws);

// 可移植版本 string => wstring
std::wstring s2ws(const std::string& s);


#endif //__REGREADER_H__
