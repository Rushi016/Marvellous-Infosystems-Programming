import { Component } from '@angular/core';
import { MarvellousChkPipe } from './marvellous-chk.pipe';
import { FormsModule } from '@angular/forms';
import { CommonModule } from '@angular/common';

@Component({
  selector: 'app-root',
  standalone: true,
  imports: [MarvellousChkPipe,FormsModule,CommonModule],
  templateUrl: './app.component.html',
  styleUrl: './app.component.css'
})
export class AppComponent {
  public No : number = 0;
  public NumState : string = "";
}
