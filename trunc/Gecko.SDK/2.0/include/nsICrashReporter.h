/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM e:/builds/moz2_slave/rel-cen-xr-w32-bld/build/xpcom/system/nsICrashReporter.idl
 */

#ifndef __gen_nsICrashReporter_h__
#define __gen_nsICrashReporter_h__


#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
class nsILocalFile; /* forward declaration */

class nsIURL; /* forward declaration */


/* starting interface:    nsICrashReporter */
#define NS_ICRASHREPORTER_IID_STR "56761088-57ad-4f5c-bd61-f678c2807fe0"

#define NS_ICRASHREPORTER_IID \
  {0x56761088, 0x57ad, 0x4f5c, \
    { 0xbd, 0x61, 0xf6, 0x78, 0xc2, 0x80, 0x7f, 0xe0 }}

/**
 * Provides access to crash reporting functionality.
 *
 * @status UNSTABLE - This interface is not frozen and will probably change in
 *                    future releases.
 */
class NS_NO_VTABLE NS_SCRIPTABLE nsICrashReporter : public nsISupports {
 public: 

  NS_DECLARE_STATIC_IID_ACCESSOR(NS_ICRASHREPORTER_IID)

  /**
   * Enable or disable the crashreporter at runtime.
   */
  /* attribute boolean enabled; */
  NS_SCRIPTABLE NS_IMETHOD GetEnabled(PRBool *aEnabled) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetEnabled(PRBool aEnabled) = 0;

  /**
   * Get or set the URL to which crash reports will be submitted.
   * Only https and http URLs are allowed, as the submission is handled
   * by OS-native networking libraries.
   *
   * @throw NS_ERROR_NOT_INITIALIZED if crash reporting is not initialized
   * @throw NS_ERROR_INVALID_ARG on set if a non-http(s) URL is assigned
   * @throw NS_ERROR_FAILURE on get if no URL is set
   */
  /* attribute nsIURL serverURL; */
  NS_SCRIPTABLE NS_IMETHOD GetServerURL(nsIURL **aServerURL) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetServerURL(nsIURL *aServerURL) = 0;

  /**
   * Get or set the path on the local system to which minidumps will be
   * written when a crash happens.
   *
   * @throw NS_ERROR_NOT_INITIALIZED if crash reporting is not initialized
   */
  /* attribute nsILocalFile minidumpPath; */
  NS_SCRIPTABLE NS_IMETHOD GetMinidumpPath(nsILocalFile **aMinidumpPath) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetMinidumpPath(nsILocalFile *aMinidumpPath) = 0;

  /**
   * Add some extra data to be submitted with a crash report.
   *
   * @param key
   *        Name of the data to be added.
   * @param data
   *        Data to be added.
   *
   * @throw NS_ERROR_NOT_INITIALIZED if crash reporting not initialized
   * @throw NS_ERROR_INVALID_ARG if key or data contain invalid characters.
   *                             Invalid characters for key are '=' and
   *                             '\n'.  Invalid character for data is '\0'.
   */
  /* void annotateCrashReport (in ACString key, in ACString data); */
  NS_SCRIPTABLE NS_IMETHOD AnnotateCrashReport(const nsACString & key, const nsACString & data) = 0;

  /**
   * Append some data to the "Notes" field, to be submitted with a crash report.
   * Unlike annotateCrashReport, this method will append to existing data.
   *
   * @param data
   *        Data to be added.
   *
   * @throw NS_ERROR_NOT_INITIALIZED if crash reporting not initialized
   * @throw NS_ERROR_INVALID_ARG if data contains invalid characters.
   *                             The only invalid character is '\0'.
   */
  /* void appendAppNotesToCrashReport (in ACString data); */
  NS_SCRIPTABLE NS_IMETHOD AppendAppNotesToCrashReport(const nsACString & data) = 0;

  /**
   * Write a minidump immediately, with the user-supplied exception
   * information. This is implemented on Windows only, because
   * SEH (structured exception handling) exists on Windows only.
   *
   * @param aExceptionInfo  EXCEPTION_INFO* provided by Window's SEH
   */
  /* [noscript] void writeMinidumpForException (in voidPtr aExceptionInfo); */
  NS_IMETHOD WriteMinidumpForException(void *aExceptionInfo) = 0;

  /**
   * Append note containing an Obj-C exception's info.
   *
   * @param aException  NSException object to append note for
   */
  /* [noscript] void appendObjCExceptionInfoToAppNotes (in voidPtr aException); */
  NS_IMETHOD AppendObjCExceptionInfoToAppNotes(void *aException) = 0;

  /**
   * User preference for submitting crash reports.
   */
  /* attribute boolean submitReports; */
  NS_SCRIPTABLE NS_IMETHOD GetSubmitReports(PRBool *aSubmitReports) = 0;
  NS_SCRIPTABLE NS_IMETHOD SetSubmitReports(PRBool aSubmitReports) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(nsICrashReporter, NS_ICRASHREPORTER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_NSICRASHREPORTER \
  NS_SCRIPTABLE NS_IMETHOD GetEnabled(PRBool *aEnabled); \
  NS_SCRIPTABLE NS_IMETHOD SetEnabled(PRBool aEnabled); \
  NS_SCRIPTABLE NS_IMETHOD GetServerURL(nsIURL **aServerURL); \
  NS_SCRIPTABLE NS_IMETHOD SetServerURL(nsIURL *aServerURL); \
  NS_SCRIPTABLE NS_IMETHOD GetMinidumpPath(nsILocalFile **aMinidumpPath); \
  NS_SCRIPTABLE NS_IMETHOD SetMinidumpPath(nsILocalFile *aMinidumpPath); \
  NS_SCRIPTABLE NS_IMETHOD AnnotateCrashReport(const nsACString & key, const nsACString & data); \
  NS_SCRIPTABLE NS_IMETHOD AppendAppNotesToCrashReport(const nsACString & data); \
  NS_IMETHOD WriteMinidumpForException(void *aExceptionInfo); \
  NS_IMETHOD AppendObjCExceptionInfoToAppNotes(void *aException); \
  NS_SCRIPTABLE NS_IMETHOD GetSubmitReports(PRBool *aSubmitReports); \
  NS_SCRIPTABLE NS_IMETHOD SetSubmitReports(PRBool aSubmitReports); 

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_NSICRASHREPORTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEnabled(PRBool *aEnabled) { return _to GetEnabled(aEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetEnabled(PRBool aEnabled) { return _to SetEnabled(aEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetServerURL(nsIURL **aServerURL) { return _to GetServerURL(aServerURL); } \
  NS_SCRIPTABLE NS_IMETHOD SetServerURL(nsIURL *aServerURL) { return _to SetServerURL(aServerURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinidumpPath(nsILocalFile **aMinidumpPath) { return _to GetMinidumpPath(aMinidumpPath); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinidumpPath(nsILocalFile *aMinidumpPath) { return _to SetMinidumpPath(aMinidumpPath); } \
  NS_SCRIPTABLE NS_IMETHOD AnnotateCrashReport(const nsACString & key, const nsACString & data) { return _to AnnotateCrashReport(key, data); } \
  NS_SCRIPTABLE NS_IMETHOD AppendAppNotesToCrashReport(const nsACString & data) { return _to AppendAppNotesToCrashReport(data); } \
  NS_IMETHOD WriteMinidumpForException(void *aExceptionInfo) { return _to WriteMinidumpForException(aExceptionInfo); } \
  NS_IMETHOD AppendObjCExceptionInfoToAppNotes(void *aException) { return _to AppendObjCExceptionInfoToAppNotes(aException); } \
  NS_SCRIPTABLE NS_IMETHOD GetSubmitReports(PRBool *aSubmitReports) { return _to GetSubmitReports(aSubmitReports); } \
  NS_SCRIPTABLE NS_IMETHOD SetSubmitReports(PRBool aSubmitReports) { return _to SetSubmitReports(aSubmitReports); } 

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_NSICRASHREPORTER(_to) \
  NS_SCRIPTABLE NS_IMETHOD GetEnabled(PRBool *aEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetEnabled(aEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD SetEnabled(PRBool aEnabled) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetEnabled(aEnabled); } \
  NS_SCRIPTABLE NS_IMETHOD GetServerURL(nsIURL **aServerURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetServerURL(aServerURL); } \
  NS_SCRIPTABLE NS_IMETHOD SetServerURL(nsIURL *aServerURL) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetServerURL(aServerURL); } \
  NS_SCRIPTABLE NS_IMETHOD GetMinidumpPath(nsILocalFile **aMinidumpPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetMinidumpPath(aMinidumpPath); } \
  NS_SCRIPTABLE NS_IMETHOD SetMinidumpPath(nsILocalFile *aMinidumpPath) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetMinidumpPath(aMinidumpPath); } \
  NS_SCRIPTABLE NS_IMETHOD AnnotateCrashReport(const nsACString & key, const nsACString & data) { return !_to ? NS_ERROR_NULL_POINTER : _to->AnnotateCrashReport(key, data); } \
  NS_SCRIPTABLE NS_IMETHOD AppendAppNotesToCrashReport(const nsACString & data) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendAppNotesToCrashReport(data); } \
  NS_IMETHOD WriteMinidumpForException(void *aExceptionInfo) { return !_to ? NS_ERROR_NULL_POINTER : _to->WriteMinidumpForException(aExceptionInfo); } \
  NS_IMETHOD AppendObjCExceptionInfoToAppNotes(void *aException) { return !_to ? NS_ERROR_NULL_POINTER : _to->AppendObjCExceptionInfoToAppNotes(aException); } \
  NS_SCRIPTABLE NS_IMETHOD GetSubmitReports(PRBool *aSubmitReports) { return !_to ? NS_ERROR_NULL_POINTER : _to->GetSubmitReports(aSubmitReports); } \
  NS_SCRIPTABLE NS_IMETHOD SetSubmitReports(PRBool aSubmitReports) { return !_to ? NS_ERROR_NULL_POINTER : _to->SetSubmitReports(aSubmitReports); } 

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class nsCrashReporter : public nsICrashReporter
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_NSICRASHREPORTER

  nsCrashReporter();

private:
  ~nsCrashReporter();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(nsCrashReporter, nsICrashReporter)

nsCrashReporter::nsCrashReporter()
{
  /* member initializers and constructor code */
}

nsCrashReporter::~nsCrashReporter()
{
  /* destructor code */
}

/* attribute boolean enabled; */
NS_IMETHODIMP nsCrashReporter::GetEnabled(PRBool *aEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCrashReporter::SetEnabled(PRBool aEnabled)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsIURL serverURL; */
NS_IMETHODIMP nsCrashReporter::GetServerURL(nsIURL **aServerURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCrashReporter::SetServerURL(nsIURL *aServerURL)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute nsILocalFile minidumpPath; */
NS_IMETHODIMP nsCrashReporter::GetMinidumpPath(nsILocalFile **aMinidumpPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCrashReporter::SetMinidumpPath(nsILocalFile *aMinidumpPath)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void annotateCrashReport (in ACString key, in ACString data); */
NS_IMETHODIMP nsCrashReporter::AnnotateCrashReport(const nsACString & key, const nsACString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void appendAppNotesToCrashReport (in ACString data); */
NS_IMETHODIMP nsCrashReporter::AppendAppNotesToCrashReport(const nsACString & data)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void writeMinidumpForException (in voidPtr aExceptionInfo); */
NS_IMETHODIMP nsCrashReporter::WriteMinidumpForException(void *aExceptionInfo)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* [noscript] void appendObjCExceptionInfoToAppNotes (in voidPtr aException); */
NS_IMETHODIMP nsCrashReporter::AppendObjCExceptionInfoToAppNotes(void *aException)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* attribute boolean submitReports; */
NS_IMETHODIMP nsCrashReporter::GetSubmitReports(PRBool *aSubmitReports)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}
NS_IMETHODIMP nsCrashReporter::SetSubmitReports(PRBool aSubmitReports)
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_nsICrashReporter_h__ */
