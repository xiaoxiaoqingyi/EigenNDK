package com.magicing.eigenndk;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        NDKUtils ndk = new NDKUtils();

        TextView txt = (TextView)findViewById(R.id.txt);
        txt.setText(ndk.invokeCmethod());

    }



}
