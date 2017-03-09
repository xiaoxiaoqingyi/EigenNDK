package com.magicing.eigenndk;

/**
 * Created by Administrator on 2017/2/10.
 */

public class NDKUtils {

    public native String invokeCmethod();

    static {
        System.loadLibrary("NDKUtils");//导入生成的链接库文件
    }

}
