import { Component } from '@angular/core';

@Component({
  selector: 'app-demo',
  standalone: true,
  imports: [],
  templateUrl: './demo.component.html',
  styleUrl: './demo.component.css'
})
export class DemoComponent
{
  public Text : string = "Marvellous Infosystem's";

  public toUpperCase()
  {
    this.Text = this.Text.toUpperCase();
  }

  public toLowerCase()
  {
    this.Text = this.Text.toLowerCase();
  }
}
