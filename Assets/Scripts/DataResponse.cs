using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataResponse
{
    public string _id { get; set; }
    public double time { get; set; }
    public string timer { get; set; }
    public System.DateTime started_at { get; set; }
    public int heart_bpm { get; set; }
    public double p_sub { get; set; }
    public double p_suit { get; set; }
    public double t_sub { get; set; }
    public int v_fan { get; set; }
    public double p_o2 { get; set; }
    public double rate_o2 { get; set; }
    public double batteryPercent { get; set; }
    public int battery_out { get; set; }
    public int cap_battery { get; set; }
    public string t_battery { get; set; }
    public double p_h2o_g { get; set; }
    public double p_h2o_l { get; set; }
    public double p_sop { get; set; }
    public double rate_sop { get; set; }
    public float t_oxygenPrimary { get; set; }
    public float t_oxygenSec { get; set; }
    public float ox_primary { get; set; }
    public float ox_secondary { get; set; }
    public string t_oxygen { get; set; }
    public double cap_water { get; set; }
    public string t_water { get; set; }
    public int __v { get; set; }
}