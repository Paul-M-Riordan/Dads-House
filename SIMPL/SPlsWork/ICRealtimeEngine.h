namespace ControlWorks.ICRealtimeEngine;
        // class declarations
         class DigestEngine;
         class ICRealtimeEngine;
         class AuthEventArgs;
         class StreamEventArgs;
         class RecordModeEventArgs;
         class RecordChannel;
     class DigestEngine 
    {
        // class delegates

        // class events

        // class functions
        STRING_FUNCTION GetEverything ( SIGNED_LONG_INTEGER algorithmDirective , SIGNED_LONG_INTEGER qopValue , SIMPLSHARPSTRING realm , SIMPLSHARPSTRING username , SIMPLSHARPSTRING password , SIMPLSHARPSTRING nonce , SIMPLSHARPSTRING cnonce , SIMPLSHARPSTRING method , SIMPLSHARPSTRING digestURI , SIMPLSHARPSTRING entityBody , SIMPLSHARPSTRING nonceCount , SIMPLSHARPSTRING qop );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING SymbolID[];
        STRING ModuleName[];
    };

     class ICRealtimeEngine 
    {
        // class delegates

        // class events
        EventHandler ICRAuthEvent ( ICRealtimeEngine sender, AuthEventArgs args );
        EventHandler streamUrlEvent ( ICRealtimeEngine sender, StreamEventArgs args );
        EventHandler recordModeEvent ( ICRealtimeEngine sender, RecordModeEventArgs args );

        // class functions
        FUNCTION ptzPreset ( INTEGER cameraNumber , INTEGER presetNumber , INTEGER presetEvent , INTEGER pressType );
        FUNCTION ptzMove ( INTEGER cameraNumber , INTEGER speed , INTEGER direction , INTEGER pressType );
        FUNCTION alarmRelay ( INTEGER alarmNumber , INTEGER alarmType );
        STRING_FUNCTION buildRTSPPlaybackUrl ( INTEGER cameraNumber , INTEGER startYear , INTEGER startMonth , INTEGER startDay , INTEGER startHour , INTEGER startMinute , INTEGER startSecond , INTEGER endYear , INTEGER endMonth , INTEGER endDay , INTEGER endHour , INTEGER endMinute , INTEGER endSecond );
        FUNCTION cameraRecordMode ( INTEGER cameraNumber , INTEGER recordMode , INTEGER recordModeType );
        FUNCTION queryCameraRecordMode ();
        FUNCTION userProgramCommandHandler ( STRING command );
        FUNCTION tryAuthorization ();
        FUNCTION changeHdmiView ( INTEGER hdmiOutput , INTEGER split , INTEGER group );
        FUNCTION updateStreamUrl ( INTEGER cameraNumber );
        FUNCTION streamHdmi1View ();
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        INTEGER AuthorizedUshort;
        STRING SymbolIDString[];
        STRING IPAddressString[];
        INTEGER HttpPortUshort;
        STRING UsernameString[];
        STRING PasswordString[];
        STRING DealerNameString[];
        STRING SiteNameString[];
        INTEGER MJPEGStreamingPortUshort;
        INTEGER WANMJPEGStreamingPortUshort;
        INTEGER RTSPStreamingPortUshort;
        INTEGER WANRTSPStreamingPortUshort;
        STRING StreamSubtypeString[];
        STRING ProjectHostnameString[];
        INTEGER MaximumNumberOfCameraInputsUshort;
        INTEGER DefaultPTZSpeedUshort;
        INTEGER UseAlternateMJPEGUrlUshort;
        INTEGER UseIndex0ForMJPEGStreamUshort;
        INTEGER UseIndex0ForJPEGSnapshotUshort;
        INTEGER UseIndex0ForRTSPStreamUshort;
        INTEGER UseIndex0ForHDMIOutputUshort;
        INTEGER UseIndex0ForHDMIOutputCameraSelectionsUshort;
        INTEGER UseAlternateHDMIOutputSplitViewCommandsUshort;
        INTEGER UseIndex0ForPtzCameraSelectionUshort;
        INTEGER UseAlternatePtzPresetArgumentsUshort;
        INTEGER UseAlternatePtzSpeedArgumentsUshort;
        INTEGER UseIndex0ForRTSPPlaybackCameraSelectionUshort;
    };

     class AuthEventArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING value[];

        // class properties
    };

     class StreamEventArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING mjpegValue[];
        STRING dgraphicValue[];
        STRING rtspValue[];
        STRING WANmjpegValue[];
        STRING WANdgraphicValue[];
        STRING WANrtspValue[];

        // class properties
    };

     class RecordModeEventArgs 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        STRING value[];

        // class properties
    };

     class RecordChannel 
    {
        // class delegates

        // class events

        // class functions
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER Mode;
        INTEGER ModeExtra1;
        INTEGER ModeExtra2;

        // class properties
    };

namespace ControlWorks;
        // class declarations
         class ConsolePrint;
     class ConsolePrint 
    {
        // class delegates

        // class events

        // class functions
        FUNCTION ConsolePrintLine ( STRING message );
        FUNCTION ConsolePrintLineAndNotice ( STRING message );
        FUNCTION ConsolePrintDebugLine ( STRING message );
        FUNCTION ConsolePrintError ( STRING message );
        FUNCTION ConsolePrintNotice ( STRING message );
        SIGNED_LONG_INTEGER_FUNCTION GetHashCode ();
        STRING_FUNCTION ToString ();

        // class variables
        INTEGER __class_id__;

        // class properties
        STRING ModuleName[];
        STRING SymbolID[];
    };

